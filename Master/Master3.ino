#include "FlexSensor.h"
#include <Wire.h>

uint8_t SendData();
FlexSensor f1(A5);	//	Pink
FlexSensor f2(A4);	//	Ring
FlexSensor f3(A3);	//	Middle
FlexSensor f4(A2);	//	Pointer
FlexSensor f5(A1);	//	Thumb

void setup() {
	Serial.begin(115200);
	Wire.begin();
}

void loop() {

	/*Serial.print(f1.ReadPos());
	Serial.print(" | ");
	Serial.print(f2.ReadPos());
	Serial.print(" | ");
	Serial.print(f3.ReadPos());
	Serial.print(" | ");
	Serial.print(f4.ReadPos());
	Serial.print(" | ");
	Serial.print(f5.ReadPos());
	Serial.println("");*/
	
	SendData();
}

uint8_t SendData() {
	Wire.beginTransmission(5);

	Wire.write(f1.ReadPos());
	Wire.write(f2.ReadPos());
	Wire.write(f3.ReadPos());
	Wire.write(f4.ReadPos());
	Wire.write(f5.ReadPos());

	return Wire.endTransmission();
}
