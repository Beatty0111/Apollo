// 
// 
// 

#include "Hand.h"

Hand::Hand(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5) {
	finger1_.attach(pin1);
	finger2_.attach(pin2);
	finger3_.attach(pin3);
	finger4_.attach(pin4);
	finger5_.attach(pin5);

	for (int i = 0; i < 5; ++i) {
		last_[i] = 0;
	}
}

void Hand::SetPosition(FlexData dataIn) {

	//	If change_in_pos > 5deg, then rotate to new pos
	if (std::abs(last_[0] - dataIn.pos1) > 5) {
		finger1_.write(dataIn.pos1);
	}
	if (std::abs(last_[1] - dataIn.pos2) > 5) {
		finger2_.write(dataIn.pos2);
	}
	if (std::abs(last_[2] - dataIn.pos3) > 5) {
		finger3_.write(dataIn.pos3);	   
	}									   
	if (std::abs(last_[3] - dataIn.pos4) > 5) {
		finger4_.write(dataIn.pos4);	   
	}									   
	if (std::abs(last_[4] - dataIn.pos5) > 5) {
		finger5_.write(dataIn.pos5);
	}

	//	Save for comparison in next iteration
	last_[0] = dataIn.pos1;
	last_[1] = dataIn.pos2;
	last_[2] = dataIn.pos3;
	last_[3] = dataIn.pos4;
	last_[4] = dataIn.pos5;
}
