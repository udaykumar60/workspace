#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#define LED0_NODE DT_ALIAS(led0)
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
typedef enum {
    STATE_INIT,
    STATE_LED_ON,
    STATE_LED_OFF,
    STATE_DELAY
} led_state_t;
static const int pattern[] = {1, 0, 1, 1, 0, 0, 1};
static const size_t pattern_length = ARRAY_SIZE(pattern);
#define STEP_DURATION_MS 500

int main(void)
{
    led_state_t current_state = STATE_INIT;
    size_t pattern_index = 0;
    int next_led_target = 0;
    while (1) {
        switch (current_state) {
        
        case STATE_INIT:
            if (!gpio_is_ready_dt(&led)) {
                return 0; 
            }
          if (gpio_pin_configure_dt(&led, GPIO_OUTPUT_INACTIVE) < 0) {
                return 0;
            }
            pattern_index = 0; 
            current_state = STATE_LED_ON; 
            break;
        case STATE_LED_ON:
            next_led_target = pattern[pattern_index];
                        gpio_pin_set_dt(&led, next_led_target);
                        current_state = STATE_DELAY;
            break;
        case STATE_LED_OFF:
            pattern_index++;
                      if (pattern_index >= pattern_length) {
                pattern_index = 0;
            }
            current_state = STATE_LED_ON;
            break;
        case STATE_DELAY:
            k_msleep(STEP_DURATION_MS);
                        current_state = STATE_LED_OFF;
            break;
        default:
            current_state = STATE_INIT;
            break;
        }
    }
    return 0;
}
