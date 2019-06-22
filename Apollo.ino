#include "Hand.h"
#include "Glove.h"
#include "FlexSense.h"
#include <cmath>
#include <servo.h>

FlexData tempData;
Glove mainGlove(A1, A2, A3, A4, A5);
Hand mainHand(5, 6, 8, 9, 10);


void setup()
{
	Serial.begin(115200);
	
}


void loop()
{
	//	Get new position from flex sensors
	tempData = mainGlove.ReadAll();

	//	Set new position
	mainHand.SetPosition(tempData);

	delay(5);
}
