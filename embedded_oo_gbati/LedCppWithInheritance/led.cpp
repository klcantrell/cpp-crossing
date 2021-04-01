#include "Led.h"

Led::Led(LedColorType color, LedStateType state)
: color(color), state(state) {
	
	RCC->AHB1ENR |= LED_PORT_CLOCK;
	
	SetState(state);
}

void Led::SetState(LedStateType state) {
	this->state = state;

	switch(this->color) {
		case RED:
			LED_PORT->MODER |= LED_RED_MODE_BIT;
			if (this->state == ON) {
				LED_PORT->ODR |= LED_RED_PIN;
			} else {
				LED_PORT->ODR &= ~LED_RED_PIN;
			}
			break;
		case GREEN:
			LED_PORT->MODER |= LED_GREEN_MODE_BIT;
			if (this->state == ON) {
				LED_PORT->ODR |= LED_GREEN_PIN;
			} else {
				LED_PORT->ODR &= ~LED_GREEN_PIN;
			}
			break;
		case YELLOW:
			LED_PORT->MODER |= LED_YELLOW_MODE_BIT;
			if (this->state == ON) {
				LED_PORT->ODR |= LED_YELLOW_PIN;
			} else {
				LED_PORT->ODR &= ~LED_YELLOW_PIN;
			}
			break;
		case BLUE:
			LED_PORT->MODER |= LED_BLUE_MODE_BIT;
			if (this->state == ON) {
				LED_PORT->ODR |= LED_BLUE_PIN;
			} else {
				LED_PORT->ODR &= ~LED_BLUE_PIN;
			}
			break;
	}
}

LedStateType Led::GetState() const {
	switch (this->color) {
		case RED:
				break;
		case GREEN:
				break;
		case BLUE:
				break;
		case YELLOW:
				break;
	}

	return this->state;
}
