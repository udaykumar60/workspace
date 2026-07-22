#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/devicetree.h>
#include <stdio.h>
#define MORSE_UNIT_MS 200
#if !DT_HAS_ALIAS(led0)
#error "Missing device alias led0. Please check your devicetree."
#endif
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
void dot(void) {
    gpio_pin_set_dt(&led, 1);
    k_msleep(MORSE_UNIT_MS);
     gpio_pin_set_dt(&led, 0);
    k_msleep(MORSE_UNIT_MS); 
    printk(".");
}
void dash(void) {
    gpio_pin_set_dt(&led, 1);
    k_msleep(MORSE_UNIT_MS * 3);
    
    gpio_pin_set_dt(&led, 0);
    k_msleep(MORSE_UNIT_MS); 
        printk("-");
}
void end_of_letter(void) {
    k_msleep(MORSE_UNIT_MS * 2);
    printk(" ");
}
void flash_U(void) {
    dot(); dot(); dash(); 
    end_of_letter();
}
void flash_D(void) {
    dash(); dot(); dot(); 
    end_of_letter();
}
void flash_A(void) {
    dot(); dash(); 
    end_of_letter();
}
void flash_Y(void) {
    dash(); dot(); dash(); dash(); 
    end_of_letter();
}
int main(void) {
    if (!gpio_is_ready_dt(&led)) {
        return 0;
    }
    if (gpio_pin_configure_dt(&led, GPIO_OUTPUT_INACTIVE) < 0) {
        return 0;
    }
    printk("System Ready. Beginning Morse sequence...\r\n");
    k_msleep(1000); 
    while (1) {
        printk("Flashing: "); //UDAY ••—  —••  •—  —•——
        flash_U();
        flash_D();
        flash_A();
        flash_Y();
        printk("\n\r"); 
        k_msleep(5000); 
    }
    return 0;
}
