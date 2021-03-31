#ifndef _POWERLED_H
#define _POWERLED_H

#include "led.h"

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

typedef struct {
	LedType super;
	LedDiameterType diameter;
	LedCurrentType current;
	LedVoltageType voltage;
} PowerLedType;

void PowerLedConstructor(PowerLedType* const me,
												 LedColorType color,
												 LedStateType state,
												 LedDiameterType diameter,
												 LedCurrentType current,
												 LedVoltageType voltage);

void PowerLedSetCurrent(PowerLedType* const me, LedCurrentType current);

void PowerLedSetDiameter(PowerLedType* const me, LedDiameterType diameter);

void PowerLedSetVoltage(PowerLedType* const me, LedVoltageType voltage);

LedElectricalType PowerLedComputePower(PowerLedType* const me);

LedElectricalType PowerLedGetCurrent(PowerLedType* const me);

LedDimensionType PowerLedGetDiameter(PowerLedType* const me);

LedElectricalType PowerLedGetVoltage(PowerLedType* const me);

#endif
