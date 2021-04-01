#include "PowerLed.h"

PowerLed::PowerLed(LedColorType color,
				 LedStateType state,
				 LedDiameterType diameter,
				 LedCurrentType current,
				 LedVoltageType voltage)
				 :Led(color, state),
					diameter(diameter),
					current(current),
					voltage(voltage)
{

}

void PowerLed::SetCurrent(LedCurrentType current) {
	this->current = current;
};

void PowerLed::SetDiameter(LedDiameterType diameter) {
	this->diameter = diameter;
};

void PowerLed::SetVoltage(LedVoltageType voltage) {
	this->voltage = voltage;
};

LedElectricalType PowerLed::ComputePower() {
	return this->voltage * this->current;
};

LedElectricalType PowerLed::GetCurrent() {
	return this->current;
};

LedDimensionType PowerLed::GetDiameter() {
	return this->diameter;
};

LedElectricalType PowerLed::GetVoltage() {
	return this->voltage;
};
