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
int main(void) {
    int ret;
    if (!gpio_is_ready_dt(&led)) {
        printf("Error: GPIO device for LED is not ready.\n");
      }
    ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
    if (ret < 0) {
        printf("Error: Failed to configure GPIO pin (err %d).\n", ret);
          }
    printf(" Heartbeat Started!\n");
    while (1) {
            gpio_pin_set_dt(&led, 1);    
        k_msleep(150);               
        gpio_pin_set_dt(&led, 0);   
        k_msleep(150);               
              gpio_pin_set_dt(&led, 1);    
        k_msleep(150);               
        gpio_pin_set_dt(&led, 0);    
        k_msleep(700);               
    }
}
