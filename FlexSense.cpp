// 
// 
// 

#include "FlexSense.h"

FlexSensor::FlexSensor(uint32_t pin) {
	pin_ = pin;
	pinMode(pin, INPUT);
}

int FlexSensor::read() {
	return analogRead(pin_);
}

