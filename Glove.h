// Glove.h

#ifndef _GLOVE_h
#define _GLOVE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "FlexSense.h"
#include "FlexData.h"

class Glove {
public:
	Glove();
	Glove(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5);

	void SetPins(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5);

	FlexData ReadAll();		//	Returns the pos (deg) of all flex sensors

private:
	FlexSensor finger1_, finger2_, finger3_, finger4_, finger5_;
};


#endif
