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

FlexData Glove::ReadAll() {
	char data1 = finger1_.ReadPos();
	char data2 = finger2_.ReadPos();
	char data3 = finger3_.ReadPos();
	char data4 = finger4_.ReadPos();
	char data5 = finger5_.ReadPos();

	return FlexData(data1, data2, data3, data4, data5);
}
