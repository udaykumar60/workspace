#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);


int main(void)
{


	if (!gpio_is_ready_dt(&led)) {
		return 0;
	}

	if(gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE) < 0)
	{
		return 0;
	}
	
	

while (1) {

		gpio_pin_set_dt(&led,1);
		printf("LED ON\n");

		k_msleep(1000);

		gpio_pin_set_dt(&led,0);
		printf("LED OFF\n");

		k_msleep(1000);

}

	return 0;

}
