// 
// 
// 

#include "FlexSensor.h"
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

//	Returns flex value, raw data Analog Input
int FlexSensor::Read() {
	return analogRead(pin_);
}

//	Returns scaled position (0 - 180), dirived from flex value
uint8_t FlexSensor::ReadPos() {
	int temp = Read();

	//	Callibration
	if (temp > max_)
		max_ = (temp + max_) / 2;			//Add better callibration system. On startup callibrate until button push? then move after button push??
	if (temp < min_)
		min_ = (temp + min_) / 2;


	//Scale input
	temp = std::abs(180 - ((temp - min_) * 180 / std::abs(max_ - min_)));

	return temp;
}

