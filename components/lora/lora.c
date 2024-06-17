#include "lora.h"
void changeModel(){



}
void lora_send_loop(void *pvParameters){
    for (;;){
	  char* test_str = "bike";
	  uart_send(test_str);
          vTaskDelay(pdMS_TO_TICKS(10000));
    }

}
void lora_rx_task(void *arg)
{
    uint8_t* data = (uint8_t*) malloc(UART_RV_BUFFER_SIZE + 1);
    while (1) {
	   const int read_num = uart_read(data);
	   if(read_num>0){
	       printf("%s\n", data); 
	   }
           vTaskDelay(pdMS_TO_TICKS(50000));
    }
    free(data);
}
void lora_test_send_loop_start(){
    xTaskCreate(lora_send_loop, "lora send", configMINIMAL_STACK_SIZE*4, NULL, 1, NULL);
    xTaskCreate(lora_rx_task, "lora rx", configMINIMAL_STACK_SIZE*4, NULL, 1, NULL);
}

