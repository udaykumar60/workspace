#include<zephyr/kernel.h>          //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr$ (kernal.h)
#include<zephyr/drivers/gpio.h>  //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr/drivers$ (gpio.h)
#include<zephyr/devicetree.h>    //RTOS/Zephyr-Development-STM32/zephyr/include/zephyr/devicetree$ 
#include<stdio.h>
// 1. Check for alias_name of the led0,led1...
 #if !DT_HAS_ALIAS(led0)   
//RTOS/Zephyr-Development-STM32/zephyr/doc/develop/west$(alias.txt) gpio_pin_toggle_dt
#error "Missing device alias led0,add it in device tree"
#endif
//2. Get the led device from the device tree the led alias ( for ALIAS location /RTOS/Zephyr-Development-STM32/zephyr/include/zephyr$) 
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET (DT_ALIAS(led0),gpios);  //Zephyr API Doc (gpio pin configure dt)
int main(){
	//3.verify the device in ready with devicetree
	if(!gpio_is_ready_dt(&led)) {
		return 0;
}
 //4. Configure the led pin as a GPIO output with intial state as off 
if (gpio_pin_configure_dt(&led,GPIO_OUTPUT_INACTIVE )<0){
	return 0;
}
//5. loop for toggle the led
for(int i=0;i<10;i++){
		if(gpio_pin_toggle_dt(&led)<0)
		{
			return 0;
		}
	printf("Led STATE: %s\n\r",gpio_pin_get_dt(&led)?"ON":"OFF");
	k_msleep(1000);
}
    gpio_pin_set_dt(&led, 0);
    printf("Blink sequence complete. LED is now OFF.\n\r");
	return 0;
	}

