#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/devicetree.h>
#include <stdio.h>
#define DELAY_UNIT_MS 1000
#if !DT_HAS_ALIAS(led0)
#error "Missing device alias led0. Please check your devicetree."
#endif
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
void led_on(void) {
    gpio_pin_set_dt(&led, 1);
}
void led_off(void) {
    gpio_pin_set_dt(&led, 0);
}
void blink_once(void) {
    gpio_pin_set_dt(&led, 1);
    k_msleep(DELAY_UNIT_MS);
    gpio_pin_set_dt(&led, 0);
    k_msleep(DELAY_UNIT_MS); 
}
void blink_multiple(int n) {
    for (int i = 0; i < n; i++) {
        if (gpio_pin_toggle_dt(&led) < 0) {
            printf("Error: Failed to toggle LED\n");
            return; }
        int state = gpio_pin_get_dt(&led);
        printf("Led STATE: %s\n\r", state ? "ON" : "OFF");
        k_msleep(DELAY_UNIT_MS);
    }
    gpio_pin_set_dt(&led, 0);
    printf("Blink sequence complete. LED is now OFF.\n\r");
}
int main(void) {
    int ret;
    if (!gpio_is_ready_dt(&led)) {
        printf("Error: GPIO device for LED is not ready.\n");
    }
    ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
    if (ret < 0) {
        printf("Error: Failed to configure GPIO pin (err %d).\n", ret);
    }
    printf("Turning LED ON...\n");
    led_on();
    k_msleep(2000);
    printf("Turning LED OFF...\n");
    led_off();
    k_msleep(2000); 
    printf("Blinking once...\n");
    blink_once();
    printf("Blinking multiple times...\n");
    blink_multiple(6);
    return 0;
}
