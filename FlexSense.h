// FlexSense.h

#ifndef _FLEXSENSE_h
#define _FLEXSENSE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

#include <stdint.h>

class FlexSensor
{
public:
	FlexSensor(uint32_t pin);
	int read();
private:
	uint32_t pin_;

};

