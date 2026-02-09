#include "../GUI.h"
#include <display.h>

#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
    #include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif


void GUI_event__Button__HomeScreen__powerbtn__Clicked(lv_event_t * event)
{
    // screen_power_off(event); //Call_Function
    if(lv_event_get_code(event) != LV_EVENT_CLICKED) return;

    if(screen_off)
        display_power_on();
    else
        display_power_off();
}


void GUI_event__Image__HomeScreen__Vector__Clicked(lv_event_t * event)
{
}


