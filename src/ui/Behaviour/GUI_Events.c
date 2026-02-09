#include "../GUI.h"

#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
    #include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif


void GUI_event__Arc__screen__arc__Value_Changed(lv_event_t * event)
{
    _ui_arc_set_text_value(GUI_Label__screen__label, GUI_Arc__screen__arc, "", " C"); //Set_Text_from_Arc
}


