#include<zephyr/kernel.h>          //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr$ (kernal.h)
#include<zephyr/drivers/gpio.h>  //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr/drivers$ (gpio.h)
#include<zephyr/devicetree.h>    //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr/devicetree$ 
#include<stdio.h>
#define BLINK_TIME 200
// 1. Check for alias_name of the led0,led1...
 #if !DT_HAS_ALIAS(led0)   
//RTOS/Zephyr-Development-STM32/zephyr/doc/develop/west$(alias.txt) gpio_pin_toggle_dt
#error "Missing device alias led0,add it in device tree"
#endif
//2. Get the led device from the device tree the led alias ( for ALIAS location /RTOS/Zephyr-Development-STM32/zephyr/include/zephyr$) 
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET (DT_ALIAS(led0),gpios);  //Zephyr API Doc (gpio pin configure dt)
int main(){
	bool led_state = false;
	//3.verify the device in ready with devicetree
	if(!gpio_is_ready_dt(&led)) {

		return 0;
}
 //4. Configure the led pin as a GPIO output with intial state as off 
if (gpio_pin_configure_dt(&led,GPIO_OUTPUT_INACTIVE )<0){
	return 0;
}
//5. loop for toggle the led
while(1){
	led_state = !led_state;
		if(gpio_pin_toggle_dt(&led)<0)
		{
			return 0;
		}
	printf("Led STATE: %s\n\r",led_state?"ON":"OFF");
	k_msleep(200);
}
	return 0;
	}

