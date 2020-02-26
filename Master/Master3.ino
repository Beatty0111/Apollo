#include "FlexSensor.h"
#include <Wire.h>

#define PINK A5
#define RING A4
#define MIDDLE A3
#define POINTER A2
#define THUMB A1

uint8_t SendData();
FlexSensor f1(PINK);
FlexSensor f2(RING);
FlexSensor f3(MIDDLE);
FlexSensor f4(POINTER);
FlexSensor f5(THUMB);

void setup() {
	Serial.begin(115200);
	Wire.begin();
}

void loop() {}
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
