#include "PowerLed.h"

int main(void) {
	USART2_Init();
	
	PowerLed* led2 = new PowerLed(BLUE, OFF, DIAMETER_SMALL, CURRENT_LOW, VOLTAGE_LOW); // dynamic allocation
	

	while (1) {	
		for (unsigned long x = 0; x < 0x10000 / 120; x++) {
				led2->SetState(ON);
		}
		
		for (unsigned long x = 0; x < 0x50000 / 120; x++) {
				led2->SetState(OFF);
		}
	}
}
