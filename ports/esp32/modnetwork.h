/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 "Eric Poulsen" <eric@zyxod.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_ESP32_MODNETWORK_H
#define MICROPY_INCLUDED_ESP32_MODNETWORK_H

#include "esp_event.h"

enum { PHY_LAN8720, PHY_IP101, PHY_RTL8201, PHY_DP83848, PHY_KSZ8041 };
enum { ETH_INITIALIZED, ETH_STARTED, ETH_STOPPED, ETH_CONNECTED, ETH_DISCONNECTED, ETH_GOT_IP };

// Cases similar to ESP8266 user_interface.h
// Error cases are referenced from wifi_err_reason_t in ESP-IDF
enum {
    STAT_IDLE       = 1000,
    STAT_CONNECTING = 1001,
    STAT_GOT_IP     = 1010,
};

typedef struct _wlan_if_obj_t {
    mp_obj_base_t base;
    int if_id;
} wlan_if_obj_t;

MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(get_wlan_obj);
MP_DECLARE_CONST_FUN_OBJ_KW(get_lan_obj);
MP_DECLARE_CONST_FUN_OBJ_1(ppp_make_new_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(esp_ifconfig_obj);
MP_DECLARE_CONST_FUN_OBJ_KW(esp_config_obj);

NORETURN void esp_exceptions_helper(esp_err_t e);

static inline void esp_exceptions(esp_err_t e) {
    if (e != ESP_OK) {
        esp_exceptions_helper(e);
    }
}

void usocket_events_deinit(void);
void network_wlan_event_handler(system_event_t *event);

#endif
