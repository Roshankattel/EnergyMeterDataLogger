/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /data/fwbuild-volumes/2.14.0/apps/final-Copy-2mod/esp32/build_contexts/build_ctx_779529064/deps/modules/mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.14.0/apps/final-Copy-2mod/esp32/build_contexts/build_ctx_779529064/build/gen/ /data/fwbuild-volumes/2.14.0/apps/final-Copy-2mod/esp32/build_contexts/build_ctx_779529064/deps/modules/mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.14.0/apps/final-Copy-2mod/esp32/build_contexts/build_ctx_779529064/deps/modules/mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.14.0/apps/final-Copy-2mod/esp32/build_contexts/build_ctx_779529064/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stddef.h>

#include "mgos_config_util.h"

const struct mgos_conf_entry mgos_config_schema_[182] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 181},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
  {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c1", .offset = offsetof(struct mgos_config, i2c1), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c1.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c1.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c1.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c1.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c1.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c1.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 8},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
  {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 12},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 63},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 16},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
  {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
  {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_BOOL, .key = "bandwidth_20mhz", .offset = offsetof(struct mgos_config, wifi.ap.bandwidth_20mhz)},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
  {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
  {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
  {.type = CONF_TYPE_INT, .key = "sta_ps_mode", .offset = offsetof(struct mgos_config, wifi.sta_ps_mode)},
  {.type = CONF_TYPE_BOOL, .key = "sta_all_chan_scan", .offset = offsetof(struct mgos_config, wifi.sta_all_chan_scan)},
  {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
  {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;
const struct mgos_config mgos_config_defaults = {
  .debug.udp_log_addr = NULL,
  .debug.mbedtls_level = 1,
  .debug.level = 2,
  .debug.file_level = NULL,
  .debug.stdout_uart = 0,
  .debug.stderr_uart = 0,
  .debug.factory_reset_gpio = -1,
  .debug.mg_mgr_hexdump_file = NULL,
  .debug.stdout_topic = NULL,
  .debug.stderr_topic = NULL,
  .i2c.unit_no = 0,
  .i2c.enable = 0,
  .i2c.freq = 100000,
  .i2c.debug = 0,
  .i2c.sda_gpio = 32,
  .i2c.scl_gpio = 33,
  .i2c1.unit_no = 1,
  .i2c1.enable = 0,
  .i2c1.freq = 100000,
  .i2c1.debug = 0,
  .i2c1.sda_gpio = 22,
  .i2c1.scl_gpio = 23,
  .sys.atca.enable = 0,
  .sys.atca.i2c_bus = 0,
  .sys.atca.i2c_addr = 96,
  .sys.atca.ecdh_slots_mask = 12,
  .sys.tz_spec = NULL,
  .sys.wdt_timeout = 30,
  .sys.pref_ota_lib = NULL,
  .device.id = "esp32_??????",
  .device.license = NULL,
  .device.mac = NULL,
  .conf_acl = "*",
  .mjs.generate_jsc = 1,
  .mqtt.enable = 1,
  .mqtt.server = "m16.cloudmqtt.com:15570",
  .mqtt.client_id = NULL,
  .mqtt.user = "lemfpvyz",
  .mqtt.pass = "jy0jZ7fTyjZ1",
  .mqtt.reconnect_timeout_min = 2.0,
  .mqtt.reconnect_timeout_max = 60.0,
  .mqtt.ssl_cert = NULL,
  .mqtt.ssl_key = NULL,
  .mqtt.ssl_ca_cert = NULL,
  .mqtt.ssl_cipher_suites = NULL,
  .mqtt.ssl_psk_identity = NULL,
  .mqtt.ssl_psk_key = NULL,
  .mqtt.clean_session = 1,
  .mqtt.keep_alive = 60,
  .mqtt.will_topic = NULL,
  .mqtt.will_message = NULL,
  .mqtt.max_qos = 2,
  .mqtt.recv_mbuf_limit = 3072,
  .mqtt.require_time = 0,
  .mqtt.cloud_events = 1,
  .mqtt1.enable = 1,
  .mqtt1.server = "m16.cloudmqtt.com:15570",
  .mqtt1.client_id = NULL,
  .mqtt1.user = "lemfpvyz",
  .mqtt1.pass = "jy0jZ7fTyjZ1",
  .mqtt1.reconnect_timeout_min = 2.0,
  .mqtt1.reconnect_timeout_max = 60.0,
  .mqtt1.ssl_cert = NULL,
  .mqtt1.ssl_key = NULL,
  .mqtt1.ssl_ca_cert = NULL,
  .mqtt1.ssl_cipher_suites = NULL,
  .mqtt1.ssl_psk_identity = NULL,
  .mqtt1.ssl_psk_key = NULL,
  .mqtt1.clean_session = 1,
  .mqtt1.keep_alive = 60,
  .mqtt1.will_topic = NULL,
  .mqtt1.will_message = NULL,
  .mqtt1.max_qos = 2,
  .mqtt1.recv_mbuf_limit = 3072,
  .mqtt1.require_time = 0,
  .mqtt1.cloud_events = 1,
  .rpc.enable = 1,
  .rpc.max_frame_size = 4096,
  .rpc.max_queue_length = 25,
  .rpc.default_out_channel_idle_close_timeout = 10,
  .rpc.acl_file = NULL,
  .rpc.auth_domain = NULL,
  .rpc.auth_file = NULL,
  .rpc.uart.uart_no = 0,
  .rpc.uart.baud_rate = 115200,
  .rpc.uart.fc_type = 2,
  .rpc.uart.dst = NULL,
  .wifi.ap.enable = 1,
  .wifi.ap.ssid = "Mongoose_??????",
  .wifi.ap.pass = "Mongoose",
  .wifi.ap.hidden = 0,
  .wifi.ap.channel = 6,
  .wifi.ap.max_connections = 10,
  .wifi.ap.ip = "192.168.4.1",
  .wifi.ap.netmask = "255.255.255.0",
  .wifi.ap.gw = "192.168.4.1",
  .wifi.ap.dhcp_start = "192.168.4.2",
  .wifi.ap.dhcp_end = "192.168.4.100",
  .wifi.ap.trigger_on_gpio = -1,
  .wifi.ap.disable_after = 0,
  .wifi.ap.hostname = NULL,
  .wifi.ap.keep_enabled = 1,
  .wifi.ap.bandwidth_20mhz = 0,
  .wifi.sta.enable = 1,
  .wifi.sta.ssid = "powertech",
  .wifi.sta.pass = "t3chp0w3r",
  .wifi.sta.user = NULL,
  .wifi.sta.anon_identity = NULL,
  .wifi.sta.cert = NULL,
  .wifi.sta.key = NULL,
  .wifi.sta.ca_cert = NULL,
  .wifi.sta.ip = NULL,
  .wifi.sta.netmask = NULL,
  .wifi.sta.gw = NULL,
  .wifi.sta.nameserver = NULL,
  .wifi.sta.dhcp_hostname = NULL,
  .wifi.sta1.enable = 0,
  .wifi.sta1.ssid = "powertech",
  .wifi.sta1.pass = "t3chp0w3r",
  .wifi.sta1.user = NULL,
  .wifi.sta1.anon_identity = NULL,
  .wifi.sta1.cert = NULL,
  .wifi.sta1.key = NULL,
  .wifi.sta1.ca_cert = NULL,
  .wifi.sta1.ip = NULL,
  .wifi.sta1.netmask = NULL,
  .wifi.sta1.gw = NULL,
  .wifi.sta1.nameserver = NULL,
  .wifi.sta1.dhcp_hostname = NULL,
  .wifi.sta2.enable = 0,
  .wifi.sta2.ssid = "powertech",
  .wifi.sta2.pass = "t3chp0w3r",
  .wifi.sta2.user = NULL,
  .wifi.sta2.anon_identity = NULL,
  .wifi.sta2.cert = NULL,
  .wifi.sta2.key = NULL,
  .wifi.sta2.ca_cert = NULL,
  .wifi.sta2.ip = NULL,
  .wifi.sta2.netmask = NULL,
  .wifi.sta2.gw = NULL,
  .wifi.sta2.nameserver = NULL,
  .wifi.sta2.dhcp_hostname = NULL,
  .wifi.sta_cfg_idx = 0,
  .wifi.sta_connect_timeout = 30,
  .wifi.sta_ps_mode = 0,
  .wifi.sta_all_chan_scan = 0,
  .board.led1.pin = 13,
  .board.led1.active_high = 1,
  .board.led2.pin = -1,
  .board.led2.active_high = 1,
  .board.led3.pin = -1,
  .board.led3.active_high = 1,
  .board.btn1.pin = 0,
  .board.btn1.pull_up = 1,
  .board.btn2.pin = -1,
  .board.btn2.pull_up = 0,
  .board.btn3.pin = -1,
  .board.btn3.pull_up = 0,
};

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug * mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, v);
}

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) {
  cfg->debug.mbedtls_level = v;
}

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) {
  cfg->debug.level = v;
}

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(struct mgos_config *cfg) {
  return cfg->debug.file_level;
}
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.file_level, v);
}

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stdout_uart = v;
}

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stderr_uart = v;
}

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) {
  cfg->debug.factory_reset_gpio = v;
}

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v);
}

/* debug.stdout_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char * mgos_config_get_debug_stdout_topic(struct mgos_config *cfg) {
  return cfg->debug.stdout_topic;
}
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.stdout_topic, v);
}

/* debug.stderr_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char * mgos_config_get_debug_stderr_topic(struct mgos_config *cfg) {
  return cfg->debug.stderr_topic;
}
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.stderr_topic, v);
}

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c * mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}

/* i2c.unit_no */
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
int mgos_config_get_i2c_unit_no(struct mgos_config *cfg) {
  return cfg->i2c.unit_no;
}
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c.unit_no = v;
}

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v) {
  cfg->i2c.enable = v;
}

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v) {
  cfg->i2c.freq = v;
}

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v) {
  cfg->i2c.debug = v;
}

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.sda_gpio = v;
}

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.scl_gpio = v;
}

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c * mgos_config_get_i2c1(struct mgos_config *cfg) {
  return &cfg->i2c1;
}

/* i2c1.unit_no */
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
int mgos_config_get_i2c1_unit_no(struct mgos_config *cfg) {
  return cfg->i2c1.unit_no;
}
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c1.unit_no = v;
}

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(struct mgos_config *cfg) {
  return cfg->i2c1.enable;
}
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v) {
  cfg->i2c1.enable = v;
}

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(struct mgos_config *cfg) {
  return cfg->i2c1.freq;
}
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v) {
  cfg->i2c1.freq = v;
}

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(struct mgos_config *cfg) {
  return cfg->i2c1.debug;
}
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v) {
  cfg->i2c1.debug = v;
}

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.sda_gpio;
}
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.sda_gpio = v;
}

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.scl_gpio;
}
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.scl_gpio = v;
}

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys * mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca * mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v) {
  cfg->sys.atca.enable = v;
}

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_bus;
}
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_bus = v;
}

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_addr = v;
}

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v) {
  cfg->sys.atca.ecdh_slots_mask = v;
}

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.tz_spec, v);
}

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) {
  cfg->sys.wdt_timeout = v;
}

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, v);
}

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device * mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.id, v);
}

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(struct mgos_config *cfg) {
  return cfg->device.license;
}
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.license, v);
}

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(struct mgos_config *cfg) {
  return cfg->device.mac;
}
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.mac, v);
}

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->conf_acl, v);
}

/* mjs */
#define MGOS_CONFIG_HAVE_MJS
#define MGOS_SYS_CONFIG_HAVE_MJS
const struct mgos_config_mjs * mgos_config_get_mjs(struct mgos_config *cfg) {
  return &cfg->mjs;
}

/* mjs.generate_jsc */
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
int mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg) {
  return cfg->mjs.generate_jsc;
}
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v) {
  cfg->mjs.generate_jsc = v;
}

/* mqtt */
#define MGOS_CONFIG_HAVE_MQTT
#define MGOS_SYS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt * mgos_config_get_mqtt(struct mgos_config *cfg) {
  return &cfg->mqtt;
}

/* mqtt.enable */
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
int mgos_config_get_mqtt_enable(struct mgos_config *cfg) {
  return cfg->mqtt.enable;
}
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v) {
  cfg->mqtt.enable = v;
}

/* mqtt.server */
#define MGOS_CONFIG_HAVE_MQTT_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
const char * mgos_config_get_mqtt_server(struct mgos_config *cfg) {
  return cfg->mqtt.server;
}
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.server, v);
}

/* mqtt.client_id */
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
const char * mgos_config_get_mqtt_client_id(struct mgos_config *cfg) {
  return cfg->mqtt.client_id;
}
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.client_id, v);
}

/* mqtt.user */
#define MGOS_CONFIG_HAVE_MQTT_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
const char * mgos_config_get_mqtt_user(struct mgos_config *cfg) {
  return cfg->mqtt.user;
}
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.user, v);
}

/* mqtt.pass */
#define MGOS_CONFIG_HAVE_MQTT_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
const char * mgos_config_get_mqtt_pass(struct mgos_config *cfg) {
  return cfg->mqtt.pass;
}
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.pass, v);
}

/* mqtt.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_min;
}
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v) {
  cfg->mqtt.reconnect_timeout_min = v;
}

/* mqtt.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_max;
}
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v) {
  cfg->mqtt.reconnect_timeout_max = v;
}

/* mqtt.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
const char * mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cert;
}
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cert, v);
}

/* mqtt.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
const char * mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_key;
}
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_key, v);
}

/* mqtt.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char * mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_ca_cert;
}
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, v);
}

/* mqtt.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cipher_suites;
}
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, v);
}

/* mqtt.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_identity;
}
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, v);
}

/* mqtt.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char * mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_key;
}
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, v);
}

/* mqtt.clean_session */
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int mgos_config_get_mqtt_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt.clean_session;
}
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v) {
  cfg->mqtt.clean_session = v;
}

/* mqtt.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt.keep_alive;
}
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v) {
  cfg->mqtt.keep_alive = v;
}

/* mqtt.will_topic */
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char * mgos_config_get_mqtt_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt.will_topic;
}
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.will_topic, v);
}

/* mqtt.will_message */
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char * mgos_config_get_mqtt_will_message(struct mgos_config *cfg) {
  return cfg->mqtt.will_message;
}
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.will_message, v);
}

/* mqtt.max_qos */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
int mgos_config_get_mqtt_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt.max_qos;
}
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v) {
  cfg->mqtt.max_qos = v;
}

/* mqtt.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt.recv_mbuf_limit;
}
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v) {
  cfg->mqtt.recv_mbuf_limit = v;
}

/* mqtt.require_time */
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int mgos_config_get_mqtt_require_time(struct mgos_config *cfg) {
  return cfg->mqtt.require_time;
}
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v) {
  cfg->mqtt.require_time = v;
}

/* mqtt.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int mgos_config_get_mqtt_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt.cloud_events;
}
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v) {
  cfg->mqtt.cloud_events = v;
}

/* mqtt1 */
#define MGOS_CONFIG_HAVE_MQTT1
#define MGOS_SYS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt * mgos_config_get_mqtt1(struct mgos_config *cfg) {
  return &cfg->mqtt1;
}

/* mqtt1.enable */
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
int mgos_config_get_mqtt1_enable(struct mgos_config *cfg) {
  return cfg->mqtt1.enable;
}
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v) {
  cfg->mqtt1.enable = v;
}

/* mqtt1.server */
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
const char * mgos_config_get_mqtt1_server(struct mgos_config *cfg) {
  return cfg->mqtt1.server;
}
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.server, v);
}

/* mqtt1.client_id */
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char * mgos_config_get_mqtt1_client_id(struct mgos_config *cfg) {
  return cfg->mqtt1.client_id;
}
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.client_id, v);
}

/* mqtt1.user */
#define MGOS_CONFIG_HAVE_MQTT1_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
const char * mgos_config_get_mqtt1_user(struct mgos_config *cfg) {
  return cfg->mqtt1.user;
}
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.user, v);
}

/* mqtt1.pass */
#define MGOS_CONFIG_HAVE_MQTT1_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
const char * mgos_config_get_mqtt1_pass(struct mgos_config *cfg) {
  return cfg->mqtt1.pass;
}
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.pass, v);
}

/* mqtt1.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_min;
}
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v) {
  cfg->mqtt1.reconnect_timeout_min = v;
}

/* mqtt1.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_max;
}
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v) {
  cfg->mqtt1.reconnect_timeout_max = v;
}

/* mqtt1.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
const char * mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cert;
}
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cert, v);
}

/* mqtt1.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
const char * mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_key;
}
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_key, v);
}

/* mqtt1.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char * mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_ca_cert;
}
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, v);
}

/* mqtt1.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cipher_suites;
}
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, v);
}

/* mqtt1.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_identity;
}
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, v);
}

/* mqtt1.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char * mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_key;
}
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, v);
}

/* mqtt1.clean_session */
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt1.clean_session;
}
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v) {
  cfg->mqtt1.clean_session = v;
}

/* mqtt1.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt1.keep_alive;
}
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v) {
  cfg->mqtt1.keep_alive = v;
}

/* mqtt1.will_topic */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char * mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt1.will_topic;
}
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.will_topic, v);
}

/* mqtt1.will_message */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char * mgos_config_get_mqtt1_will_message(struct mgos_config *cfg) {
  return cfg->mqtt1.will_message;
}
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.will_message, v);
}

/* mqtt1.max_qos */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
int mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt1.max_qos;
}
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v) {
  cfg->mqtt1.max_qos = v;
}

/* mqtt1.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt1.recv_mbuf_limit;
}
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v) {
  cfg->mqtt1.recv_mbuf_limit = v;
}

/* mqtt1.require_time */
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int mgos_config_get_mqtt1_require_time(struct mgos_config *cfg) {
  return cfg->mqtt1.require_time;
}
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v) {
  cfg->mqtt1.require_time = v;
}

/* mqtt1.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int mgos_config_get_mqtt1_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt1.cloud_events;
}
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v) {
  cfg->mqtt1.cloud_events = v;
}

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc * mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.enable = v;
}

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) {
  cfg->rpc.max_frame_size = v;
}

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) {
  cfg->rpc.max_queue_length = v;
}

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) {
  cfg->rpc.default_out_channel_idle_close_timeout = v;
}

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.acl_file, v);
}

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, v);
}

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_file, v);
}

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart * mgos_config_get_rpc_uart(struct mgos_config *cfg) {
  return &cfg->rpc.uart;
}

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg) {
  return cfg->rpc.uart.uart_no;
}
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.uart_no = v;
}

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg) {
  return cfg->rpc.uart.baud_rate;
}
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.baud_rate = v;
}

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg) {
  return cfg->rpc.uart.fc_type;
}
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.fc_type = v;
}

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(struct mgos_config *cfg) {
  return cfg->rpc.uart.dst;
}
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.uart.dst, v);
}

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi * mgos_config_get_wifi(struct mgos_config *cfg) {
  return &cfg->wifi;
}

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap * mgos_config_get_wifi_ap(struct mgos_config *cfg) {
  return &cfg->wifi.ap;
}

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(struct mgos_config *cfg) {
  return cfg->wifi.ap.enable;
}
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.enable = v;
}

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg) {
  return cfg->wifi.ap.ssid;
}
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.ssid, v);
}

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(struct mgos_config *cfg) {
  return cfg->wifi.ap.pass;
}
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.pass, v);
}

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg) {
  return cfg->wifi.ap.hidden;
}
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.hidden = v;
}

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(struct mgos_config *cfg) {
  return cfg->wifi.ap.channel;
}
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.channel = v;
}

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg) {
  return cfg->wifi.ap.max_connections;
}
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.max_connections = v;
}

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(struct mgos_config *cfg) {
  return cfg->wifi.ap.ip;
}
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.ip, v);
}

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg) {
  return cfg->wifi.ap.netmask;
}
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.netmask, v);
}

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(struct mgos_config *cfg) {
  return cfg->wifi.ap.gw;
}
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.gw, v);
}

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_start;
}
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v);
}

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_end;
}
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v);
}

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg) {
  return cfg->wifi.ap.trigger_on_gpio;
}
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.trigger_on_gpio = v;
}

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg) {
  return cfg->wifi.ap.disable_after;
}
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.disable_after = v;
}

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg) {
  return cfg->wifi.ap.hostname;
}
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.hostname, v);
}

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg) {
  return cfg->wifi.ap.keep_enabled;
}
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.keep_enabled = v;
}

/* wifi.ap.bandwidth_20mhz */
#define MGOS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
int mgos_config_get_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg) {
  return cfg->wifi.ap.bandwidth_20mhz;
}
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.bandwidth_20mhz = v;
}

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta(struct mgos_config *cfg) {
  return &cfg->wifi.sta;
}

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta.enable;
}
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta.enable = v;
}

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta.ssid;
}
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ssid, v);
}

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta.pass;
}
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.pass, v);
}

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(struct mgos_config *cfg) {
  return cfg->wifi.sta.user;
}
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.user, v);
}

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta.anon_identity;
}
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v);
}

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.cert;
}
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.cert, v);
}

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(struct mgos_config *cfg) {
  return cfg->wifi.sta.key;
}
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.key, v);
}

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.ca_cert;
}
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v);
}

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta.ip;
}
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ip, v);
}

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta.netmask;
}
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.netmask, v);
}

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta.gw;
}
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.gw, v);
}

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta.nameserver;
}
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.nameserver, v);
}

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta.dhcp_hostname;
}
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v);
}

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta1(struct mgos_config *cfg) {
  return &cfg->wifi.sta1;
}

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta1.enable;
}
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta1.enable = v;
}

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ssid;
}
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ssid, v);
}

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta1.pass;
}
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.pass, v);
}

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(struct mgos_config *cfg) {
  return cfg->wifi.sta1.user;
}
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.user, v);
}

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta1.anon_identity;
}
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v);
}

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.cert;
}
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.cert, v);
}

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(struct mgos_config *cfg) {
  return cfg->wifi.sta1.key;
}
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.key, v);
}

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ca_cert;
}
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v);
}

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ip;
}
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ip, v);
}

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta1.netmask;
}
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.netmask, v);
}

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta1.gw;
}
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.gw, v);
}

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta1.nameserver;
}
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v);
}

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta1.dhcp_hostname;
}
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v);
}

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta2(struct mgos_config *cfg) {
  return &cfg->wifi.sta2;
}

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta2.enable;
}
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta2.enable = v;
}

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ssid;
}
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ssid, v);
}

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta2.pass;
}
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.pass, v);
}

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(struct mgos_config *cfg) {
  return cfg->wifi.sta2.user;
}
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.user, v);
}

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta2.anon_identity;
}
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v);
}

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.cert;
}
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.cert, v);
}

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(struct mgos_config *cfg) {
  return cfg->wifi.sta2.key;
}
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.key, v);
}

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ca_cert;
}
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v);
}

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ip;
}
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ip, v);
}

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta2.netmask;
}
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.netmask, v);
}

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta2.gw;
}
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.gw, v);
}

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta2.nameserver;
}
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v);
}

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta2.dhcp_hostname;
}
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v);
}

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg) {
  return cfg->wifi.sta_cfg_idx;
}
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_cfg_idx = v;
}

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg) {
  return cfg->wifi.sta_connect_timeout;
}
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_connect_timeout = v;
}

/* wifi.sta_ps_mode */
#define MGOS_CONFIG_HAVE_WIFI_STA_PS_MODE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PS_MODE
int mgos_config_get_wifi_sta_ps_mode(struct mgos_config *cfg) {
  return cfg->wifi.sta_ps_mode;
}
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_ps_mode = v;
}

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(struct mgos_config *cfg) {
  return cfg->wifi.sta_all_chan_scan;
}
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_all_chan_scan = v;
}

/* board */
#define MGOS_CONFIG_HAVE_BOARD
#define MGOS_SYS_CONFIG_HAVE_BOARD
const struct mgos_config_board * mgos_config_get_board(struct mgos_config *cfg) {
  return &cfg->board;
}

/* board.led1 */
#define MGOS_CONFIG_HAVE_BOARD_LED1
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 * mgos_config_get_board_led1(struct mgos_config *cfg) {
  return &cfg->board.led1;
}

/* board.led1.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
int mgos_config_get_board_led1_pin(struct mgos_config *cfg) {
  return cfg->board.led1.pin;
}
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v) {
  cfg->board.led1.pin = v;
}

/* board.led1.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int mgos_config_get_board_led1_active_high(struct mgos_config *cfg) {
  return cfg->board.led1.active_high;
}
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led1.active_high = v;
}

/* board.led2 */
#define MGOS_CONFIG_HAVE_BOARD_LED2
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 * mgos_config_get_board_led2(struct mgos_config *cfg) {
  return &cfg->board.led2;
}

/* board.led2.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
int mgos_config_get_board_led2_pin(struct mgos_config *cfg) {
  return cfg->board.led2.pin;
}
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v) {
  cfg->board.led2.pin = v;
}

/* board.led2.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int mgos_config_get_board_led2_active_high(struct mgos_config *cfg) {
  return cfg->board.led2.active_high;
}
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led2.active_high = v;
}

/* board.led3 */
#define MGOS_CONFIG_HAVE_BOARD_LED3
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 * mgos_config_get_board_led3(struct mgos_config *cfg) {
  return &cfg->board.led3;
}

/* board.led3.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
int mgos_config_get_board_led3_pin(struct mgos_config *cfg) {
  return cfg->board.led3.pin;
}
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v) {
  cfg->board.led3.pin = v;
}

/* board.led3.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int mgos_config_get_board_led3_active_high(struct mgos_config *cfg) {
  return cfg->board.led3.active_high;
}
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led3.active_high = v;
}

/* board.btn1 */
#define MGOS_CONFIG_HAVE_BOARD_BTN1
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 * mgos_config_get_board_btn1(struct mgos_config *cfg) {
  return &cfg->board.btn1;
}

/* board.btn1.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
int mgos_config_get_board_btn1_pin(struct mgos_config *cfg) {
  return cfg->board.btn1.pin;
}
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn1.pin = v;
}

/* board.btn1.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn1.pull_up;
}
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn1.pull_up = v;
}

/* board.btn2 */
#define MGOS_CONFIG_HAVE_BOARD_BTN2
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 * mgos_config_get_board_btn2(struct mgos_config *cfg) {
  return &cfg->board.btn2;
}

/* board.btn2.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
int mgos_config_get_board_btn2_pin(struct mgos_config *cfg) {
  return cfg->board.btn2.pin;
}
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn2.pin = v;
}

/* board.btn2.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn2.pull_up;
}
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn2.pull_up = v;
}

/* board.btn3 */
#define MGOS_CONFIG_HAVE_BOARD_BTN3
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 * mgos_config_get_board_btn3(struct mgos_config *cfg) {
  return &cfg->board.btn3;
}

/* board.btn3.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
int mgos_config_get_board_btn3_pin(struct mgos_config *cfg) {
  return cfg->board.btn3.pin;
}
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn3.pin = v;
}

/* board.btn3.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn3.pull_up;
}
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn3.pull_up = v;
}
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}
