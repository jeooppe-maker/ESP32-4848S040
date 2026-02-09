#include "../../GUI.h"



void GUI_initScreen__HomeScreen()
{
    GUI_Screen__HomeScreen = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__HomeScreen, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Container__HomeScreen__Footer = lv_obj_create(GUI_Screen__HomeScreen);
    lv_obj_remove_style_all(GUI_Container__HomeScreen__Footer);
    lv_obj_remove_flag(GUI_Container__HomeScreen__Footer, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_remove_flag(GUI_Container__HomeScreen__Footer, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Container__HomeScreen__Footer, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_size(GUI_Container__HomeScreen__Footer, lv_pct(100), 90);

    GUI_Button__HomeScreen__homebtn = lv_button_create(GUI_Container__HomeScreen__Footer);
    lv_obj_set_align(GUI_Button__HomeScreen__homebtn, LV_ALIGN_LEFT_MID);
    lv_obj_set_size(GUI_Button__HomeScreen__homebtn, lv_pct(33), lv_pct(100));

    GUI_Image__HomeScreen__image = lv_image_create(GUI_Button__HomeScreen__homebtn);
    lv_obj_add_flag(GUI_Image__HomeScreen__image, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__HomeScreen__image, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__HomeScreen__image, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__HomeScreen__image, 64, 64);

    GUI_Button__HomeScreen__emptybtn = lv_button_create(GUI_Container__HomeScreen__Footer);
    lv_obj_set_align(GUI_Button__HomeScreen__emptybtn, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Button__HomeScreen__emptybtn, lv_pct(33), lv_pct(100));

    GUI_Button__HomeScreen__settingsbtn = lv_button_create(GUI_Container__HomeScreen__Footer);
    lv_obj_set_align(GUI_Button__HomeScreen__settingsbtn, LV_ALIGN_RIGHT_MID);
    lv_obj_set_size(GUI_Button__HomeScreen__settingsbtn, lv_pct(33), lv_pct(100));

    GUI_Image__HomeScreen__image_2 = lv_image_create(GUI_Button__HomeScreen__settingsbtn);
    lv_obj_add_flag(GUI_Image__HomeScreen__image_2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__HomeScreen__image_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__HomeScreen__image_2, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__HomeScreen__image_2, 64, 64);

    GUI_Container__HomeScreen__Header = lv_obj_create(GUI_Screen__HomeScreen);
    lv_obj_remove_style_all(GUI_Container__HomeScreen__Header);
    lv_obj_remove_flag(GUI_Container__HomeScreen__Header, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_remove_flag(GUI_Container__HomeScreen__Header, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Container__HomeScreen__Header, LV_ALIGN_TOP_MID);
    lv_obj_set_size(GUI_Container__HomeScreen__Header, lv_pct(100), 100);

    GUI_Button__HomeScreen__powerbtn = lv_button_create(GUI_Container__HomeScreen__Header);
    lv_obj_set_align(GUI_Button__HomeScreen__powerbtn, LV_ALIGN_LEFT_MID);
    lv_obj_set_size(GUI_Button__HomeScreen__powerbtn, 64, 64);
    lv_obj_add_event_cb(GUI_Button__HomeScreen__powerbtn, GUI_event__Button__HomeScreen__powerbtn__Clicked,
                        LV_EVENT_CLICKED, NULL);

    GUI_Image__HomeScreen__Vector = lv_image_create(GUI_Button__HomeScreen__powerbtn);
    lv_obj_remove_flag(GUI_Image__HomeScreen__Vector, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__HomeScreen__Vector, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__HomeScreen__Vector, 58, 58);
    lv_obj_add_event_cb(GUI_Image__HomeScreen__Vector, GUI_event__Image__HomeScreen__Vector__Clicked, LV_EVENT_CLICKED,
                        NULL);

    GUI_Button__HomeScreen__wifibtn = lv_button_create(GUI_Container__HomeScreen__Header);
    lv_obj_set_align(GUI_Button__HomeScreen__wifibtn, LV_ALIGN_RIGHT_MID);
    lv_obj_set_size(GUI_Button__HomeScreen__wifibtn, 64, 64);

    GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0 = lv_image_create(GUI_Button__HomeScreen__wifibtn);
    lv_obj_remove_flag(GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0, 64, 64);

    GUI_Label__HomeScreen__Date = lv_label_create(GUI_Container__HomeScreen__Header);
    lv_label_set_long_mode(GUI_Label__HomeScreen__Date, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__HomeScreen__Date, LV_ALIGN_CENTER);
    lv_obj_set_x(GUI_Label__HomeScreen__Date, -90);
    lv_obj_set_size(GUI_Label__HomeScreen__Date, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__HomeScreen__Time = lv_label_create(GUI_Container__HomeScreen__Header);
    lv_label_set_long_mode(GUI_Label__HomeScreen__Time, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__HomeScreen__Time, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Label__HomeScreen__Time, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__HomeScreen();
    GUI_initScreenTexts__HomeScreen();
}


void GUI_initScreenTexts__HomeScreen()
{
    lv_label_set_text(GUI_Label__HomeScreen__Date, "09.02.2026");
    lv_label_set_text(GUI_Label__HomeScreen__Time, "15:00");
}


void GUI_initScreenStyles__HomeScreen()
{
    lv_obj_add_style(GUI_Screen__HomeScreen, &GUI_Style__class_BaWWVdtkS0TBOE__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__HomeScreen__homebtn, &GUI_Style__class_P6esKs6bAf4nvy__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__HomeScreen__image, &upload_home_85a42dbbab8f4a38850a3f547649d832_png);

    lv_obj_add_style(GUI_Button__HomeScreen__settingsbtn, &GUI_Style__class_VSH8AxRE2TrIvu__,
                     LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__HomeScreen__image_2, &upload_gear_d9b2b60ef26e4053b8b2ab3e9c0a6e18_png);

    lv_obj_add_style(GUI_Container__HomeScreen__Header, &GUI_Style__class_lcxI5jRfDANtpN__,
                     LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__HomeScreen__powerbtn, &GUI_Style__class_8pn8CWxlrcQqM6__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__HomeScreen__Vector, &upload_vector_1_10_5120x5440_6973fb11ca1245b987576c6caa3c73f5_png);

    lv_obj_add_style(GUI_Image__HomeScreen__Vector, &GUI_Style__class_DxrVcg2PAxxMsd__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__HomeScreen__wifibtn, &GUI_Style__class_mGY02xSQ4hf0rG__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0,
                     &upload_vector_1_12_5759x4480_939fb82a1d184c40bcc9579c7b31c3fa_png);

    lv_obj_add_style(GUI_Label__HomeScreen__Date, &GUI_Style__class_3vzvK1vwTpLQ3N__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__HomeScreen__Time, &GUI_Style__class_kbhdo344fOnwPv__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


