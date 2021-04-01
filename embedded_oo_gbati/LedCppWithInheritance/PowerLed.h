#ifndef _POWERLED_H
#define _POWERLED_H

#include "Led.h"

typedef uint8_t LedElectricalType;
typedef uint8_t LedDimensionType;

typedef enum {
	CURRENT_LOW = 10,
	CURRENT_NORMAL = 20,
	CURRENT_HIGH = 35,
	CURRENT_VERY_HIGH = 60
} LedCurrentType;

typedef enum {
	DIAMETER_SMALL = 2,
	DIAMETER_NORMAL = 5,
	DIAMETER_LARGE = 7
} LedDiameterType;

typedef enum {
	VOLTAGE_LOW = 3,
	VOLTAGE_NORMAL = 5,
	VOLTAGE_HIGH = 9
} LedVoltageType;

class PowerLed: public Led {
	private:
		LedDiameterType diameter;
		LedCurrentType current;
		LedVoltageType voltage;
	public:
		PowerLed(LedColorType color,
						 LedStateType state,
						 LedDiameterType diameter,
						 LedCurrentType current,
						 LedVoltageType voltage);

		void SetCurrent(LedCurrentType current);

		void SetDiameter(LedDiameterType diameter);

		void SetVoltage(LedVoltageType voltage);

		LedElectricalType ComputePower();

		LedElectricalType GetCurrent();

		LedDimensionType GetDiameter();

		LedElectricalType GetVoltage();
};

#endif
