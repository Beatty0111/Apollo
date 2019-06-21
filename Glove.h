// Glove.h

#ifndef _GLOVE_h
#define _GLOVE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "FlexSense.h"

struct FlexData {
	char pos1;
	char pos2;
	char pos3;
	char pos4;
	char pos5;
	FlexData(char fin1, char fin2, char fin3, char fin4, char fin5) :
		pos1(fin1), pos2(fin2), pos3(fin3), pos4(fin4), pos5(fin5) {}
};

class Glove {
public:
	Glove();
	Glove(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5);

	void SetPins(uint32_t pin1, uint32_t pin2, uint32_t pin3, uint32_t pin4, uint32_t pin5);

	FlexData ReadAll();

private:
	FlexSensor finger1_;
	FlexSensor finger2_;
	FlexSensor finger3_;
	FlexSensor finger5_;
	FlexSensor finger4_;
};


#endif
