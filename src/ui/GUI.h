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

extern lv_obj_t * GUI_Screen__screen;
extern lv_obj_t * GUI_Container__screen__container;
extern lv_obj_t  * GUI_Arc__screen__arc;
LV_FONT_DECLARE(montserrantbold32_1);
extern lv_obj_t  *  GUI_Label__screen__label;
extern lv_obj_t  * GUI_Button__screen__button;


// Screen-specific function declarations
void GUI_initScreen__screen();
void GUI_initScreenTexts__screen();
void GUI_initScreenStyles__screen();

extern lv_style_t GUI_Style__class_uhlgdnNsAKMUY2__;


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




void GUI_event__Arc__screen__arc__Value_Changed(lv_event_t * event);



#ifdef __cplusplus
} //extern "C"
#endif

#endif //_GUI_HEADER_INCLUDED

