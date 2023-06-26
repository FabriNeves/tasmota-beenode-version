/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/

// Examples :

// -- Master parameter control --------------------
// #undef  CFG_HOLDER
// #define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "FAMILIA NEVES"        // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "casa6int"      // [Password1] Wifi password

// Beenode Version

// #undef MQTT_GRPTOPIC
// #define MQTT_GRPTOPIC    "Beenode"

// #undef FRIENDLY_NAME
// #define FRIENDLY_NAME  "Beenode"

// #undef  PROJECT
// #define PROJECT         "Beenode"         // PROJECT is used as the default topic delimiter

// #undef  MQTT_GRPTOPIC
// #define MQTT_GRPTOPIC          "Beenode"

// Color Beenode

// Beenode base colors  WebColor {"WebColor":["#f2d377","#1d1d1b","#3d3f41","#dddddd","#293134","#ffb000","#293134","#ff5661","#008000","#1d1d1b","#fbbb29","#ffd67d","#bf4904","#d97904","#47c266","#5aaf6f","#ffffff","#999999","#fbbb29"]}

#undef COLOR_TEXT
#define COLOR_TEXT "#f2d377" // [WebColor1] Global text color

#undef COLOR_BACKGROUND
#define COLOR_BACKGROUND "#3d3f41" // Dark gray [WebColor2] Global background color

#undef COLOR_FORM
#define COLOR_FORM "#3d3f41" // [WebColor3] Form background color

#undef COLOR_INPUT_TEXT
#define COLOR_INPUT_TEXT "#dddddd" // [WebColor4] Input text color

#undef COLOR_INPUT
#define COLOR_INPUT "#293134" // [WebColor5] Input background color

#undef COLOR_CONSOLE_TEXT
#define COLOR_CONSOLE_TEXT "#ffb000" // [WebColor6] Console text color

#undef COLOR_CONSOLE
#define COLOR_CONSOLE "#293134" // [WebColor7] Console background color

#undef COLOR_TEXT_WARNING
#define COLOR_TEXT_WARNING "#ff5661" // [WebColor8] Warning text color

#undef COLOR_TEXT_SUCCESS
#define COLOR_TEXT_SUCCESS "#008000" // [WebColor9] Success text color

#undef COLOR_BUTTON_TEXT
#define COLOR_BUTTON_TEXT "#1d1d1b" // [WebColor10] Button text color

#undef COLOR_BUTTON
#define COLOR_BUTTON "#fbbb29" // [WebColor11] Button color

#undef COLOR_BUTTON_HOVER
#define COLOR_BUTTON_HOVER "#ffd67d" // [WebColor12] Button color when hovered over

#undef COLOR_BUTTON_RESET
#define COLOR_BUTTON_RESET "#bf4904" // [WebColor13] Restart/Reset/Delete button color

#undef COLOR_BUTTON_RESET_HOVER
#define COLOR_BUTTON_RESET_HOVER "#d97904" // [WebColor14] Restart/Reset/Delete button color when hovered over

#undef COLOR_BUTTON_SAVE
#define COLOR_BUTTON_SAVE "#47c266" // [WebColor15] Save button color

#undef COLOR_BUTTON_SAVE_HOVER
#define COLOR_BUTTON_SAVE_HOVER "#5aaf6f" // [WebColor16] Save button color when hovered over

#undef COLOR_TIMER_TAB_TEXT
#define COLOR_TIMER_TAB_TEXT "#ffffff" // [WebColor17] Config timer tab text color

#undef COLOR_TIMER_TAB_BACKGROUND
#define COLOR_TIMER_TAB_BACKGROUND "#999999" // [WebColor18] Config timer tab background color

#undef COLOR_TITLE_TEXT
#define COLOR_TITLE_TEXT "#fbbb29" // [WebColor19] Title text color



// Language

#undef MY_LANGUAGE
#define MY_LANGUAGE pt_BR

// Wifi config

#undef WIFI_CONFIG_TOOL
#define WIFI_CONFIG_TOOL WIFI_MANAGER

// TLS

#define USE_MQTT_TLS      

#undef MQTT_TLS_ENABLED
#define MQTT_TLS_ENABLED true
#undef MQTT_TLS_FINGERPRINT
#define MQTT_TLS_FINGERPRINT true


// Display

// #define USE_DISPLAY    

// Other config

// #ifdef USE_DOMOTICZ
//   #undef USE_DOMOTICZ
// #endif

// #ifdef USE_TELEGRAM_FINGERPRINT
//   #undef USE_TELEGRAM_FINGERPRINT
// #endif

// #ifdef USE_KNX_WEB_MENU
//   #undef USE_KNX_WEB_MENU
// #endif

// #ifdef USE_IR_RECEIVE
//   #undef USE_IR_RECEIVE
// #endif

// -- Setup your own MQTT settings  ---------------
// #undef  MQTT_HOST
// #define MQTT_HOST         "beenode.io" // [MqttHost]

// #undef  MQTT_PORT
// #define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

/*
#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS     MY_IP                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY        MY_GW                // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS            MY_DNS               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

#ifdef MY_DNS2
#undef  WIFI_DNS2
#define WIFI_DNS2           MY_DNS2              // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

// !!! Remember that your changes GOES AT THE BOTTOM OF THIS FILE right before the last #endif !!!
*/

#endif // _USER_CONFIG_OVERRIDE_H_
