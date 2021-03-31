#include "led.h"

Led led1 (RED, OFF); // one way of initializiation ("global" static allocation)
LedStateType led1State;
LedStateType led2State;

int main(void) {
	USART2_Init();
	
	// Led led2 (BLUE, ON); // static allocation
	Led *led2 = new Led(BLUE, ON); // dynamic allocation
	
	led1State = led1.GetState();
	led2State = led2->GetState();
	
	led1.SetState(ON);
	led2->SetState(OFF);
	
	delete led2;
	while (1) {}
}
