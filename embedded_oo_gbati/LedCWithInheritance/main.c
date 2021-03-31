#include "PowerLed.h"

PowerLedType powerLed1;

LedElectricalType led1Power;

int main(void) {
	USART2_Init();
	
	PowerLedConstructor(&powerLed1, BLUE, ON, DIAMETER_NORMAL, CURRENT_NORMAL, VOLTAGE_NORMAL);
	
	led1Power = PowerLedComputePower(&powerLed1);
	
	while (1) {}
}
