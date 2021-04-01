#include "PowerLed.h"

PowerLed led1 (RED, OFF, DIAMETER_NORMAL, CURRENT_NORMAL, VOLTAGE_NORMAL); // one way of initializiation ("global" static allocation)

LedStateType led1State;
LedElectricalType led1Current;
LedDimensionType led1Diameter;

LedStateType led2State;
LedElectricalType led2Current;
LedDimensionType led2Diameter;

int main(void) {
	USART2_Init();
	
	// Led led2 (BLUE, ON); // static allocation
	PowerLed* led2 = new PowerLed(BLUE, ON, DIAMETER_SMALL, CURRENT_LOW, VOLTAGE_LOW); // dynamic allocation
	
	led1State = led1.GetState();
	led1Current = led1.GetCurrent();
	led1Diameter = led1.GetDiameter();
	
	led2Current = led2->GetCurrent();
	led2Diameter = led2->GetDiameter();
	
	led1.SetState(ON);
	led1State = led1.GetState();
	
	led2->SetState(OFF);
	led2State = led2->GetState();
	
	delete led2;

	while (1) {}
}
