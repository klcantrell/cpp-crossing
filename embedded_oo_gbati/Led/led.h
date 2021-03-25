#ifndef LED_H
#define LED_H

#include "uart.h"

typedef enum {
    RED = 0, GREEN, YELLOW, BLUE
} LedColorType;

typedef enum {
    OFF = 0, ON = 1,
} LedStateType;

typedef struct {
    LedColorType color;
    LedStateType state;
} LedType;

void LedConstructor(LedType *const me, LedColorType color, LedStateType state);

void SetLedState(LedType *const me, LedStateType state);

LedStateType ReadLedState(LedType *const me);

#endif
