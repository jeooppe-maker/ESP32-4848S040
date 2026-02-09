#include "display.h"
#include "driver/gpio.h"
#include "lvgl.h"

#define LCD_BL_PIN 38

bool screen_off = false;

void display_init(void)
{
    gpio_config_t io_conf = {
        .pin_bit_mask = 1ULL << LCD_BL_PIN,
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    gpio_set_level((gpio_num_t)LCD_BL_PIN, 1); // BL ON
    screen_off = false;
}

void display_power_on(void)
{
    gpio_set_level((gpio_num_t)LCD_BL_PIN, 1);
    lv_timer_enable(true);
    screen_off = false;
}

void display_power_off(void)
{
    gpio_set_level((gpio_num_t)LCD_BL_PIN, 0);
    // lv_timer_enable(false);
    screen_off = true;
}
