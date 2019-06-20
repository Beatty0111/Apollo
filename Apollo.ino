#include "FlexSense.h"

int volt;
FlexSensor finger1(A1);

void setup()
{
	Serial.begin(115200);
	
}


void loop()
{
	Serial.println(finger1.read());
	delay(100);
}
