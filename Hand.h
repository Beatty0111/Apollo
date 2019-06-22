// Hand.h

#ifndef _HAND_h
#define _HAND_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <Servo.h>
#include "FlexData.h"
#include <cmath>

class Hand {
public:

	Hand(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5);

	void SetPosition(FlexData dataIn);

private:
	Servo finger1_, finger2_, finger3_, finger4_, finger5_;
	uint8_t last_[5];	//	Position (deg) from last iteration
};

#endif

