#ifndef common_event
#define common_event
#include <string.h>
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_event.h"
#include "esp_err.h"
#include "esp_event.h"

#define configUSE_16_BIT_TICKS 0
/* The main event*/
#define MAIN_I2C_INIT_BIT  BIT0
#define MAIN_DISPLAY_INIT_BIT BIT1
#define MAIN_WIFI_GETIP_BIT BIT3
#define MAIN_MQTT_APP_START_BIT BIT4


#endif

