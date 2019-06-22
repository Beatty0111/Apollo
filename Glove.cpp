// 
// 
// 

#include "Glove.h"

Glove::Glove() {
	
}

Glove::Glove(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5) {
	SetPins(pin1, pin2, pin3, pin4, pin5);
}

void Glove::SetPins(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5) {
	finger1_.SetPin(pin1);
	finger2_.SetPin(pin2);
	finger3_.SetPin(pin3);
	finger4_.SetPin(pin4);
	finger5_.SetPin(pin5);
}

//	Returns the pos (deg) of all flex sensors
FlexData Glove::ReadAll() {
	uint8_t data1 = finger1_.ReadPos();
	uint8_t data2 = finger2_.ReadPos();
	uint8_t data3 = finger3_.ReadPos();
	uint8_t data4 = finger4_.ReadPos();
	uint8_t data5 = finger5_.ReadPos();

	return FlexData(data1, data2, data3, data4, data5);
}
