/* Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#define USER_SSID "YOUR_SSID"
#define USER_PASS "YOUR_PASS"
#define BLINK_GPIO 16

#include <WiFi.h>

void blink_task(void *pvParameter)
{
    //wait for wifi connected before start blinking
    while(WiFi.status() != WL_CONNECTED){
      yield();
    }

    /* Set the GPIO as a push/pull output */
    pinMode(BLINK_GPIO, OUTPUT);
    int level = 0;
    /* toggle LED in every 500ms */
    while(1) {
        digitalWrite(BLINK_GPIO, level);
        delay(500);
        level = !level;
    }
}

extern "C" void app_main()
{
    WiFi.begin(USER_SSID, USER_PASS);

    xTaskCreate(&blink_task, "blink_task", 512, NULL, 5, NULL);

    uint32_t counter = 0;
    while(1){
	printf("Hello world #%u\r\n", counter++);
	delay(2000);
    }
}
