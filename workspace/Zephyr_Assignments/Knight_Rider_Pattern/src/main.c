#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>
#include <errno.h>

#define NUM_LEDS 3

#define LED0_NODE DT_ALIAS(led0)
#define LED1_NODE DT_ALIAS(led1)
#define LED2_NODE DT_ALIAS(led2)

#if !DT_NODE_HAS_STATUS(LED0_NODE, okay)
#error "led0 alias not found"
#endif

#if !DT_NODE_HAS_STATUS(LED1_NODE, okay)
#error "led1 alias not found"
#endif

#if !DT_NODE_HAS_STATUS(LED2_NODE, okay)
#error "led2 alias not found"
#endif

static const struct gpio_dt_spec leds[NUM_LEDS] = {
    GPIO_DT_SPEC_GET(LED0_NODE, gpios),
    GPIO_DT_SPEC_GET(LED1_NODE, gpios),
    GPIO_DT_SPEC_GET(LED2_NODE, gpios),
};

int main(void)
{
    int ret;

    printk(" Knight Rider (3 LEDs)\n");

    /* Initialize LEDs */
    for (int i = 0; i < NUM_LEDS; i++) {

        if (!gpio_is_ready_dt(&leds[i])) {
            printk("LED %d not ready\n", i);
            return -ENODEV;
        }

        ret = gpio_pin_configure_dt(&leds[i], GPIO_OUTPUT_INACTIVE);
        if (ret < 0) {
            printk("Failed to configure LED %d\n", i);
            return ret;
        }
    }

    while (1) {

        /* Forward: LED1 -> LED2 -> LED3 */
        for (int i = 0; i < NUM_LEDS; i++) {

            for (int j = 0; j < NUM_LEDS; j++) {
                gpio_pin_set_dt(&leds[j], 0);
            }

            gpio_pin_set_dt(&leds[i], 1);
            k_msleep(300);
        }

        /* Reverse: LED2 */
        for (int i = NUM_LEDS - 2; i > 0; i--) {

            for (int j = 0; j < NUM_LEDS; j++) {
                gpio_pin_set_dt(&leds[j], 0);
            }

            gpio_pin_set_dt(&leds[i], 1);
            k_msleep(1000);
        }
    }

    return 0;
}
