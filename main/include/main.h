#ifndef main
#define main
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_event.h"
#include "esp_err.h"
#include "esp_event.h"

#define configUSE_16_BIT_TICKS 0

EventGroupHandle_t get_main_event_group();

#endif

