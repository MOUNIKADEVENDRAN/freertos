#include<Arduino.h>
#include<FreeRTOS.h>
//#include<freertos>
#define TEMPERATURE_UPDATE_INTERVAL_MS100
#define LED_PIN 2

TaskHandle_t tempTaskHandle;
TaskHandle_t lesTaskHandle;
float cpuTemerature=0.0;
bool temperatureUpdated=false;

void temperatureTask(void *parameter)
{
  (void)parameter;
  for(;;){
    cpuTemperature= ;
    temperatureUpdated=true;
    vTaskDelay(pdMS_TO_TICKS(TEMPERATURE_UPDATE_INTERVAL_MS));
  }
}
void setup()
{
  Serial.begin(9600);
  xTaskCreatePinnedToCore(
    temperatureTask,
    "TemperatureTask",
    configMINIMAL_STACK_SIZE +1024,
    NULL,
    2,
    &ledTaskHandle,
    1
    );
    }
    void loop(){
      
    }
