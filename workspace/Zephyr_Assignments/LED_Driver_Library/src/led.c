#include "led.h"
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <stdio.h>

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)
#define DELAY_UNIT_MS 1000

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
void led_init(void){
int ret;
    if (!gpio_is_ready_dt(&led)) {
        printf("Error: GPIO device for LED is not ready.\n");
    }
    ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
    if (ret < 0) {
        printf("Error: Failed to configure GPIO pin (err %d).\n", ret);
    }
}

void led_on(void) {
    gpio_pin_set_dt(&led, 1);
            printf("LED ON\n");
}
void led_off(void) {
    gpio_pin_set_dt(&led, 0);
        printf("LED OFF\n");
}
void led_toggle(void)
	{
        gpio_pin_toggle_dt(&led);
        printf("Blink Once\n");
        k_msleep(1000);
}
void led_blink(int times, int delay_ms)
{
        printf("Blink %d Times",times);

        for(int i=0;i<=times;i++)
        {
                gpio_pin_set_dt(&led,1);

                k_msleep(delay_ms);

                gpio_pin_set_dt(&led,0);
                k_msleep(delay_ms);
        }
}

