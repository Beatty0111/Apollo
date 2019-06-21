// 
// 
// 

#include "FlexSense.h"
#include <cmath>

FlexSensor::FlexSensor(uint32_t pin) {
	SetPin(pin);
	min_ = 10000;
	max_ = 0;
}

FlexSensor::FlexSensor() {
	pin_ = 0;
	min_ = 10000;
	max_ = 0;
}

void FlexSensor::SetPin(uint32_t pin) {
	pin_ = pin;
	pinMode(pin, INPUT);
}

int FlexSensor::Read() {
		return analogRead(pin_);		//FIXME: Add error checking if pin_ is 0?
}

char FlexSensor::ReadPos() {
	int temp = Read();

	//	Callibration
	if (temp > max_)
		max_ = temp;
	if (temp < min_)
		min_ = temp;


	//Scale input
	temp = (temp * 255 / std::abs(max_ - min_));

	return temp;
}

