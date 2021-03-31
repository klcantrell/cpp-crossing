#include "led.h"

void LedConstructor(LedType *const me, LedColorType color, LedStateType state) {
	me->color = color;
	me->state = state;
	
	RCC->AHB1ENR |= LED_PORT_CLOCK;
	
	SetLedState(me, state);
}

void SetLedState(LedType *const me, LedStateType state) {
	me->state = state;

	switch(me->color) {
		case RED:
			LED_PORT->MODER |= LED_RED_MODE_BIT;
			if (me->state == ON) {
				LED_PORT->ODR |= LED_RED_PIN;
				printf("The RED Led is set to ON \n\r");
			} else {
				LED_PORT->ODR &= ~LED_RED_PIN;
				printf("The RED Led is set to OFF \n\r");
			}
			break;
		case GREEN:
			LED_PORT->MODER |= LED_GREEN_MODE_BIT;
			if (me->state == ON) {
				LED_PORT->ODR |= LED_GREEN_PIN;
				printf("The GREEN Led is set to ON \n\r");
			} else {
				LED_PORT->ODR &= ~LED_GREEN_PIN;
				printf("The GREEN Led is set to OFF \n\r");
			}
			break;
		case YELLOW:
			LED_PORT->MODER |= LED_YELLOW_MODE_BIT;
			if (me->state == ON) {
				LED_PORT->ODR |= LED_YELLOW_PIN;
				printf("The YELLOW Led is set to ON \n\r");
			} else {
				LED_PORT->ODR &= ~LED_YELLOW_PIN;
				printf("The YELLOW Led is set to OFF \n\r");
			}
			break;
		case BLUE:
			LED_PORT->MODER |= LED_BLUE_MODE_BIT;
			if (me->state == ON) {
				LED_PORT->ODR |= LED_BLUE_PIN;
				printf("The BLUE Led is set to ON \n\r");
			} else {
				LED_PORT->ODR &= ~LED_BLUE_PIN;
				printf("The BLUE Led is set to OFF \n\r");
			}
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
