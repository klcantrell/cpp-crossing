#include "led.h"

LedType led1;
LedType led2;

int main(void) {
	USART2_Init();
	
	LedConstructor(&led1, RED, OFF);
	LedConstructor(&led2, BLUE, ON);
	
	ReadLedState(&led1);
	ReadLedState(&led2);
	
	SetLedState(&led1, ON);
	
	while (1) {}
}
