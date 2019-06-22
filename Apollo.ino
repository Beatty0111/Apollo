#include "Glove.h"
#include "FlexSense.h"
#include <cmath>
#include <servo.h>

FlexData tempData;
Glove mainGlove(A1, A2, A3, A4, A5);

//TEMP CODE FOR SERVO TESTING
Servo x;
int last = 0;

void setup()
{
	Serial.begin(115200);
	x.attach(10);
	
}


void loop()
{
	tempData = mainGlove.ReadAll();
	Serial.println((int)(tempData.pos1));

	//TEMP CODE FOR SERVO TESTING
	if(std::abs(last - tempData.pos1) > 5)
		x.write((int)tempData.pos1);
	last = tempData.pos1;

	delay(10);
}
