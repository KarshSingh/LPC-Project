#ifndef _LPC_TIMER_H_
#define _LPC_TIMER_H_

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#define TIMER0 LPC_TIM0
#define TIMER1 LPC_TIM1
#define TIMER2 LPC_TIM2
#define TIMER3 LPC_TIM3

void initTimer(LPC_TIM_TypeDef* timer, uint32_t pclk);
void startTimer(LPC_TIM_TypeDef* timer);
void stopTimer(LPC_TIM_TypeDef* timer);
uint32_t getTime(LPC_TIM_TypeDef* timer);
void enableTimerInterrupt(LPC_TIM_TypeDef* timer, uint32_t time, uint8_t reset, uint8_t stop);

#endif
