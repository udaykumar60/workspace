#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>
#include <errno.h>

/* LED aliases from DeviceTree */
#define LED0_NODE DT_ALIAS(led0)
#define LED1_NODE DT_ALIAS(led1)

#if !DT_NODE_HAS_STATUS(LED0_NODE, okay)
#error "led0 alias not defined"
#endif

#if !DT_NODE_HAS_STATUS(LED1_NODE, okay)
#error "led1 alias not defined"
#endif

/* GPIO specifications */
static const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);

int main(void)
{
    int ret;

    printk(" Two LEDs\n");

    /* Check GPIO devices */
    if (!gpio_is_ready_dt(&led0) || !gpio_is_ready_dt(&led1)) {
        printk("Error: One or more GPIO devices are not ready!\n");
        return -ENODEV;
    }

    /* Configure LEDs as outputs */
    ret = gpio_pin_configure_dt(&led0, GPIO_OUTPUT_INACTIVE);
    if (ret < 0) {
        printk("Failed to configure LED0\n");
        return ret;
    }

    ret = gpio_pin_configure_dt(&led1, GPIO_OUTPUT_INACTIVE);
    if (ret < 0) {
        printk("Failed to configure LED1\n");
        return ret;
    }

    while (1) {
        /* LED0 ON, LED1 OFF */
        gpio_pin_set_dt(&led0, 1);
        gpio_pin_set_dt(&led1, 0);
        k_msleep(500);

        /* LED0 OFF, LED1 ON */
        gpio_pin_set_dt(&led0, 0);
        gpio_pin_set_dt(&led1, 1);
        k_msleep(500);
    }

    return 0;
}
