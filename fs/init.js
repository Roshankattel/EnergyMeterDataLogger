load('api_mqtt.js');
load('api_config.js');
load('api_timer.js');
load('api_gpio.js');
load('api_uart.js');
load('api_sys.js');

let RE = 26;
let DE = 27;
let ObisIndex = 0;
let uartNo = 1;
let request, id1, id2;
let mode = 0;
let rxAcc = '';

let initalChar = [0x01, 0x52, 0x31, 0x02,];
let finalChar = [0x28, 0x29, 0x03, 0x5e];

GPIO.setup_output(RE, 1);
GPIO.setup_output(DE, 1);

UART.setConfig(uartNo, {
  baudRate: 9600,
  numDataBits: 7,
  parity: 1,
  numStopBits: 1,
  esp32: {
    gpio: {
      rx: 22,
      tx: 23,
    },
  },
});

function toString(arr, len) {
  let str = '';
  for (let i = 0; i < len; i++) {
    str = str + chr(arr[i]);
  }
  return str;
}

let obisValues = [
  '\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x2f\x3f\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x21\x0d\x0a\x01\x42\x30\x03\x2f\x3f\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x21\x0d\x0a',
  '\x06\x30\x35\x31\x0d\x0a',
  '1-1:0.2.0',
  '1-1:32.7.0',
  '1-1:52.7.0',
  '1-1:72.7.0',
  '1-1:31.7.0',
  '1-1:51.7.0',
  '1-1:14.7.0',
  '0-0:C.10.0',
  '1-1:1.4.0',
  '1-1:2.4.0'
];

let obisValues1 = [
  '\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x01\x42\x30\x03\x2f\x3f\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x21\x0d\x0a\x01\x42\x30\x03\x2f\x3f\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x21\x0d\x0a',
  '\x06\x30\x35\x31\x0d\x0a',
  ''
];
let test = obisValues;
let mqttResp = {};
UART.setRxEnabled(1, true);

function publishTelemetry() {
  mqttResp.time = Math.floor(Timer.now() * 1000);
  print(JSON.stringify(mqttResp));
  if (mode === 1) {
    MQTT.pub('v1/devices/me/telemetry', JSON.stringify(mqttResp));
  }
  else if (mode === -1) {
    MQTT.pub('v1/devices/me/telemetry', JSON.stringify(mqttResp));
  }
}
let attempt1 = 0;
MQTT.sub('my/topic/#', function (conn, topic, msg) {
  print('Topic:', topic, 'message:', msg);
  request = JSON.parse(msg);
  print(request);
  print(request.OBIS);
  id1 = Timer.set(2000, Timer.REPEAT, function () {
    attempt1++;
    if (mode === 0) {
      print("SPECIAL OBIS REQUEST");
      mode = -1;
      ObisIndex = 0;
      test = obisValues1;
      // test[test.length-1] = ['1-1:2.4.0'];
      test[test.length - 1] = request.OBIS;
      Timer.del(id1);
      sendObisReq(test[ObisIndex], ObisIndex);
    }
    if (attempt1 === 3) {
      Timer.del(id1);
    }
  }, null);
}, null);

function sendObisReq(obis, index) {
  let OBIS = obis;
  GPIO.write(RE, 1);
  GPIO.write(DE, 1);
  if (index > 1) {
    OBIS = toString(initalChar, initalChar.length) + obis + toString(finalChar, finalChar.length);
  }
  UART.write(uartNo, OBIS);
  id2 = Timer.set(5000, Timer.REPEAT, function () {
    mode = 0;
  }, null);
  UART.flush(1);
  GPIO.write(RE, 0);
  GPIO.write(DE, 0);
}


Timer.set(15000, Timer.REPEAT, function () {
  if (mode === 0) {
    print("Start new seq");
    test = obisValues;
    ObisIndex = 0;
    mode = 1;
    sendObisReq(test[ObisIndex], ObisIndex);
  }
}, null);


let attempt = 0;
UART.setDispatcher(1, function (uartNo) {
  if (UART.readAvail(uartNo) > 0) {
    let data = UART.read(uartNo);
    let a = data.indexOf('(');
    let b = data.indexOf(')');
    let response = data.slice(a + 1, b);
    // print("raw data = " + data);
    if (data === '\x00') {
      return;
    }
    Timer.del(id2);
    if (data === "/BSM5\2P2000\x0d\x0a") {
      print("start success");
      ObisIndex++;
      attempt = 0;
      sendObisReq(test[ObisIndex], ObisIndex);
      return;
    } else if (data === "\x01P0\x02(123456)\x03g") {
      print("baud success");
      ObisIndex++;
      attempt = 0;
      sendObisReq(test[ObisIndex], ObisIndex);
      return;
    }
    else if (a !== -1 && b !== -1 && ObisIndex > 1) {
      print("Obis " + obisValues[ObisIndex] + " Success = " + response + " Data = " + data);
      mqttResp[test[ObisIndex]] = response;
      ObisIndex++;
      attempt = 0;
      if (ObisIndex >= test.length) {
        publishTelemetry();
        mode = 0;
        mqttResp = {};
        ObisIndex = 0;
        test = obisValues;
        return;
      }
      sendObisReq(obisValues[ObisIndex], ObisIndex);
    } else {
      attempt++;
      print("Obis " + obisValues[ObisIndex] + " Failed, Data = " + data);
      sendObisReq(obisValues[ObisIndex], ObisIndex);
      if (attempt >= 3) {
        ObisIndex++;
        attempt = 0;
        return;
      }
    }
  }
}, null);