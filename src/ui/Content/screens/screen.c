#include "../../GUI.h"



void GUI_initScreen__screen()
{
    GUI_Screen__screen = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Container__screen__container = lv_obj_create(GUI_Screen__screen);
    lv_obj_remove_style_all(GUI_Container__screen__container);
    lv_obj_remove_flag(GUI_Container__screen__container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_remove_flag(GUI_Container__screen__container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Container__screen__container, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Container__screen__container, lv_pct(100), lv_pct(100));

    GUI_Arc__screen__arc = lv_arc_create(GUI_Container__screen__container);
    lv_arc_set_value(GUI_Arc__screen__arc, 50);
    lv_arc_set_bg_angles(GUI_Arc__screen__arc, 120, 60);
    lv_obj_set_align(GUI_Arc__screen__arc, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Arc__screen__arc, 250, 250);
    lv_obj_add_event_cb(GUI_Arc__screen__arc, GUI_event__Arc__screen__arc__Value_Changed, LV_EVENT_VALUE_CHANGED, NULL);

    GUI_Label__screen__label = lv_label_create(GUI_Arc__screen__arc);
    lv_label_set_long_mode(GUI_Label__screen__label, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Label__screen__label, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Button__screen__button = lv_button_create(GUI_Container__screen__container);
    lv_obj_set_align(GUI_Button__screen__button, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_size(GUI_Button__screen__button, 100, 50);


    GUI_initScreenStyles__screen();
    GUI_initScreenTexts__screen();
}


void GUI_initScreenTexts__screen()
{
    lv_label_set_text(GUI_Label__screen__label, "0");
}


void GUI_initScreenStyles__screen()
{
    lv_obj_add_style(GUI_Label__screen__label, &GUI_Style__class_uhlgdnNsAKMUY2__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


