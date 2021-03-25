#include "led.h"

void LedConstructor(LedType *const me, LedColorType color, LedStateType state) {
    me->color = color;
    me->state = state;
}

void SetLedState(LedType *const me, LedStateType state) {
    me->state = state;

    switch (me->color) {
    case RED:
        printf("The RED Led is set to %d\n\r", me->state);
        break;
    case GREEN:
        printf("The GREEN Led is set to %d\n\r", me->state);
        break;
    case BLUE:
        printf("The BLUE Led is set to %d\n\r", me->state);
        break;
    case YELLOW:
        printf("The YELLOW Led is set to %d\n\r", me->state);
        break;
    }
}

LedStateType ReadLedState(LedType *const me) {
    switch (me->color) {
    case RED:
        printf("The RED Led is currently %d\n\r", me->state);
        break;
    case GREEN:
        printf("The GREEN Led is currently %d\n\r", me->state);
        break;
    case BLUE:
        printf("The BLUE Led is currently %d\n\r", me->state);
        break;
    case YELLOW:
        printf("The YELLOW Led is currently %d\n\r", me->state);
        break;
    }
	
    return me->state;
}
