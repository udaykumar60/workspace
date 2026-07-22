#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include<stdio.h>
#define LED0_NODE DT_ALIAS(led0)
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const int arr[] = {1, 0, 1, 1, 0, 0, 1};
static const size_t arr_length = ARRAY_SIZE(arr); 
#define STEP_DURATION_MS 500

int main(void)
{
	printf("LED Patterns using Arrays");
    if (!gpio_is_ready_dt(&led)) {
        return 0;
    }
    int ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
    if (ret < 0) {
        return 0;
    }
       while (1) {
                for (size_t i = 0; i < arr_length; i++) {
                        gpio_pin_set_dt(&led, arr[i]);
                        k_msleep(STEP_DURATION_MS);
        }
        
        k_msleep(1000);
    }
    return 0;
}
