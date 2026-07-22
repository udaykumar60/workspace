#include <zephyr/kernel.h>        //Zephyr-Development-STM32/zephyr/include/zephyr/kernel.h
#include <zephyr/drivers/gpio.h>  //Zephyr-Development-STM32/zephyr/include/zephyr/drivers/gpio.h
#include <zephyr/devicetree.h>    //Zephyr-Development-STM32/zephyr/include/zephy/rdevicetree.h
#include <stdio.h>

// 1. Checkfor aliases_name of the led0

#if !DT_HAS_ALIAS(led0)
	#error "Missing devicetree alias led0, add it in device tree"
#endif

// 2. Get the led device from the devicetree using the led0 aliases

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);

int led_init(void)
{
    if (!gpio_is_ready_dt(&led0)) {
        printf("GPIO device not ready\n");
        return -ENODEV;
    }

    int ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);

    if (ret < 0) {
        printf("GPIO configuration failed\n");
        return -EIO;
    }

    printf("LED initialized successfully\n");
    return 0;
}

int main()
{
	led_init();
	bool led_state = false;
	// 4. Configure the led pin as a GPIO OUTPUT with initial state as off
	// 5. Loop for toggle the led
	
	while (1) {
		led_state = !led_state;
		if (gpio_pin_toggle_dt(&led) <0 ) {
			printf("Failed to toggle LED\n");
			return -EIO;
		}
		printf("LED STATE : %s\n\r",led_state ? "ON" : "OFF");
		k_msleep(1000);
	}
	return 0;
}
