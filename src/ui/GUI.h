#ifndef _GUI_HEADER_INCLUDED
#define _GUI_HEADER_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif


#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif
#include "ui_helpers.h"

extern lv_obj_t * GUI_Screen__HomeScreen;
extern lv_obj_t * GUI_Container__HomeScreen__Footer;
extern lv_obj_t  * GUI_Button__HomeScreen__homebtn;
extern lv_obj_t  *  GUI_Image__HomeScreen__image;
extern lv_obj_t  * GUI_Button__HomeScreen__emptybtn;
extern lv_obj_t  * GUI_Button__HomeScreen__settingsbtn;
extern lv_obj_t  *  GUI_Image__HomeScreen__image_2;
extern lv_obj_t * GUI_Container__HomeScreen__Header;
extern lv_obj_t  * GUI_Button__HomeScreen__powerbtn;
extern lv_obj_t  *  GUI_Image__HomeScreen__Vector;
extern lv_obj_t  * GUI_Button__HomeScreen__wifibtn;
extern lv_obj_t  *  GUI_Image__HomeScreen__Vector__image_r7KS9Y0D8J8Jh0;
LV_FONT_DECLARE(montserratbold18_1);
extern lv_obj_t  * GUI_Label__HomeScreen__Date;
extern lv_obj_t  * GUI_Label__HomeScreen__Time;


// Screen-specific function declarations
void GUI_initScreen__HomeScreen();
void GUI_initScreenTexts__HomeScreen();
void GUI_initScreenStyles__HomeScreen();

extern lv_style_t GUI_Style__class_BaWWVdtkS0TBOE__;
extern lv_style_t GUI_Style__class_P6esKs6bAf4nvy__;
extern lv_style_t GUI_Style__class_VSH8AxRE2TrIvu__;
extern lv_style_t GUI_Style__class_lcxI5jRfDANtpN__;
extern lv_style_t GUI_Style__class_8pn8CWxlrcQqM6__;
extern lv_style_t GUI_Style__class_DxrVcg2PAxxMsd__;
extern lv_style_t GUI_Style__class_mGY02xSQ4hf0rG__;
extern lv_style_t GUI_Style__class_3vzvK1vwTpLQ3N__;
extern lv_style_t GUI_Style__class_kbhdo344fOnwPv__;


void GUI_load();

void GUI_init();

void GUI_refresh();


void GUI_initHAL();
void HAL_init();

void GUI_initFramework();

void GUI_loadContent();


void GUI_initContent();


void GUI_initTheme();


void GUI_initScreens();


void GUI_loadFirstScreen();


void GUI_initScreenContents();

void GUI_initScreenTexts();

void GUI_initScreenStyles();


void GUI_initGlobalStyles();


void GUI_initAnimations();




void GUI_event__Button__HomeScreen__powerbtn__Clicked(lv_event_t * event);
// void screen_power_off(lv_event_t * event);
void GUI_event__Image__HomeScreen__Vector__Clicked(lv_event_t * event);



#ifdef __cplusplus
} //extern "C"
#endif

#endif //_GUI_HEADER_INCLUDED

LV_IMG_DECLARE( upload_vector_1_10_5120x5440_6973fb11ca1245b987576c6caa3c73f5_png );
LV_IMG_DECLARE( upload_home_85a42dbbab8f4a38850a3f547649d832_png );
LV_IMG_DECLARE( upload_vector_1_12_5759x4480_939fb82a1d184c40bcc9579c7b31c3fa_png );
LV_IMG_DECLARE( upload_gear_d9b2b60ef26e4053b8b2ab3e9c0a6e18_png );
