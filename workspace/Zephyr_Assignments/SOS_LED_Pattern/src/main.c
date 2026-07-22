#include <zephyr/kernel.h>          
#include <zephyr/drivers/gpio.h>  
#include <zephyr/devicetree.h>    
#include <stdio.h>

#define DOT_TIME        200
#define DASH_TIME       600
#define GAP_TIME        200  
#define LETTER_GAP_TIME 600  
#define WORD_GAP_TIME  2000  

#if !DT_HAS_ALIAS(led0)   
#error "Missing device alias led0, add it in device tree"
#endif

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios); 

int main(void) {
    k_msleep(1000);

    if (!gpio_is_ready_dt(&led)) {
        return 0;
    }

    if (gpio_pin_configure_dt(&led, GPIO_OUTPUT_INACTIVE) < 0) {
        return 0;
    } 

    while (1) {
        printf("\n--- New SOS Signal Sequence ---\n\r");

        /* 1. S = . . . (3 dots) */
        printf("S: ");
        for (int i = 0; i < 3; i++) {
            gpio_pin_set_dt(&led, 1);
            printf("."); 
            fflush(stdout);
            k_msleep(DOT_TIME);
            
            gpio_pin_set_dt(&led, 0);
            k_msleep(GAP_TIME);
        }
        printf("\n\r");
        k_msleep(LETTER_GAP_TIME - GAP_TIME); 

        /* 2. O = - - - (3 dashes) */
        printf("O: ");
        for (int i = 0; i < 3; i++) {
            gpio_pin_set_dt(&led, 1);
            printf("-"); 
            fflush(stdout);
            k_msleep(DASH_TIME);
            
            gpio_pin_set_dt(&led, 0);
            k_msleep(GAP_TIME);
        }
        printf("\n\r");
        k_msleep(LETTER_GAP_TIME - GAP_TIME); 

        /* 3. S = . . . (3 dots) */
        printf("S: ");
        for (int i = 0; i < 3; i++) {
            gpio_pin_set_dt(&led, 1);
            printf("."); 
            fflush(stdout);
            k_msleep(DOT_TIME);
            
            gpio_pin_set_dt(&led, 0);
            k_msleep(GAP_TIME);
        }
        printf("\n\r");

        /* 4. Complete Word Gap before restarting */
        printf("Waiting for next transmission...\n\r");
        k_msleep(WORD_GAP_TIME);
    }

    return 0;
}
