// FlexSense.h

#ifndef _FLEXSENSE_h
#define _FLEXSENSE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <stdint.h>

class FlexSensor
{
public:
	FlexSensor(uint32_t pin);
	FlexSensor();

	void SetPin(uint32_t pin);

	int Read();
	char ReadPos();

private:
	uint32_t pin_;
	int min_, max_;

};


#endif

