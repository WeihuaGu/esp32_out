#include "main.h"
#include "external_bus.h"
#include "lora.h"
static EventGroupHandle_t s_main_event_group;

EventGroupHandle_t get_main_event_group(){
    return s_main_event_group;
}

void external_bus_init(void)
{
     uart_init();
     vTaskDelay(pdMS_TO_TICKS(100));

}
void init_communication(void)
{
    external_bus_init();
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    lora_test_send_loop_start();
}
void init_components(void)
{
}
void app_main(void)
{
     s_main_event_group = xEventGroupCreate();

     init_communication();
     init_components();

}


