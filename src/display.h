#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void display_init(void);
void display_power_on(void);
void display_power_off(void);

extern bool screen_off;

#ifdef __cplusplus
}
#endif
