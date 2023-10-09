#include <stdio.h>
#include <pico/stdlib.h>

#define LED_PIN 25

int main(){
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while(1){
        gpio_put(LED_PIN, true);
        sleep_ms(200);
        gpio_put(LED_PIN, false);
        sleep_ms(200);
    }
    return 0;
}
 