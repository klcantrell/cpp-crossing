#include "PowerLed.h"

void PowerLedConstructor(PowerLedType* const me,
												 LedColorType color,
												 LedStateType state,
												 LedDiameterType diameter,
												 LedCurrentType current,
												 LedVoltageType voltage) {
	LedConstructor(&me->super, color, state);
	me->diameter = diameter;
  me->current = current;
	me->voltage = voltage;
};

void PowerLedSetCurrent(PowerLedType* const me, LedCurrentType current) {
	me->current = current;
};

void PowerLedSetDiameter(PowerLedType* const me, LedDiameterType diameter) {
	me->diameter = diameter;
};

void PowerLedSetVoltage(PowerLedType* const me, LedVoltageType voltage) {
	me->voltage = voltage;
};

LedElectricalType PowerLedComputePower(PowerLedType* const me) {
	return me->current * me->voltage;
};

LedElectricalType PowerLedGetCurrent(PowerLedType* const me) {
	return me->current;
};

LedElectricalType PowerLedGetDiameter(PowerLedType* const me) {
	return me->diameter;
};

LedElectricalType PowerLedGetVoltage(PowerLedType* const me) {
	return me->voltage;
};
