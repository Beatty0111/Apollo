// FlexSensor.h

#ifndef _FLEXSENSOR_h
#define _FLEXSENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class FlexSensor {
public:
	FlexSensor(uint32_t pin);
	FlexSensor();

	void SetPin(uint32_t pin);

	int Read();
	uint8_t ReadPos();

private:
	uint32_t pin_;
	uint16_t min_, max_;

};

#endif

