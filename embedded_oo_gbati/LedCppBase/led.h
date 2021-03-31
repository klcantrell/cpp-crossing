#ifndef LED_H
#define LED_H

#include "uart.h"
#include "stm32f4xx.h"

#define LED_PORT GPIOB

#define LED_PORT_CLOCK (1<<1)

#define LED_RED_PIN (1<<14)
#define LED_GREEN_PIN (1<<12)
#define LED_YELLOW_PIN (1<<13)
#define LED_BLUE_PIN (1<<15)

#define LED_RED_MODE_BIT (1<<28)
#define LED_GREEN_MODE_BIT (1<<24)
#define LED_YELLOW_MODE_BIT (1<<26)
#define LED_BLUE_MODE_BIT (1<<30)

typedef enum {
	RED = 0, GREEN, YELLOW, BLUE
} LedColorType;

typedef enum {
	OFF = 0, ON = 1,
} LedStateType;

class Led {
	private:
		LedColorType color;
		LedStateType state;
	
	public:
		Led(LedColorType color, LedStateType state);
		void SetState(LedStateType state);
		LedStateType GetState() const;
};

#endif
