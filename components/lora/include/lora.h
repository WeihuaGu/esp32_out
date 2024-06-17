#ifndef lora_t
#define lora_t
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_err.h"
#include "external_bus.h"

void changeModel();
void lora_test_send_loop_start();

#endif
