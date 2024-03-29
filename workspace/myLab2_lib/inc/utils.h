#ifndef _UTILS_H
#define _UTILS_H

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#define POLLING	0
#define TRIGGER	1

void Delay(uint32_t val);
void joystick_handler(void(*oper)(uint8_t, uint8_t, void*), void *arg, uint8_t mode);

#endif /* _UTILS_H */
