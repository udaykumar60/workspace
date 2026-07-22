#include <stdio.h>
#include <zephyr/kernel.h>
#include "led.h"

int main(void)
{

        led_init();


while (1) {

                led_on();
                k_msleep(1000);

                led_off();
                k_msleep(1000);

                led_toggle();

                led_blink(4, 500);

                break;

}

        return 0;

}


