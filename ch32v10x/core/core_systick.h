#ifndef __CORE_SYSTICK_H
#define __CORE_SYSTICK_H

#include <stdint.h>

void systick_interrupt_init();

uint32_t micros();
uint32_t millis();

void delay_us(uint32_t micro_seconds);
void delay_ms(uint32_t milli_seconds);

#endif
