#include "Glove.h"
#include "FlexSense.h"

FlexData tempData;
Glove mainGlove(A1, A2, A3, A4, A5);

void setup()
{
	Serial.begin(115200);
	
}


void loop()
{
	tempData = mainGlove.ReadAll();
	delay(100);
}
