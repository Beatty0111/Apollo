//#include "ServoHand.h"
#include <Servo.h>
#include <Wire.h>


uint8_t pos[] = {180, 180, 180, 180, 180};
uint8_t posLast[] = {180, 180, 180, 180, 180};

Servo f1, f2, f3, f4a, f4b;

#define thumb_rotate 12
#define thumb_1 11
#define pointer_pin 10
#define middle_pin 9
#define ring_pin 8

void GetData(int numBytes);
void SetPos();

void setup() {
	Serial.begin(115200);
	Wire.begin(5);
	Wire.onReceive(GetData);

	f1.attach(ring_pin);
	f2.attach(middle_pin);
	f3.attach(pointer_pin);
	f4a.attach(thumb_1);
	f4b.attach(thumb_rotate);


}

void loop() {
	delay(300);
	SetPos();
}

void SetPos() {
	//	If change is significant, move the servo
	if (abs(posLast[0] - pos[0]) > 15) {
		f1.write(pos[0]);
	}
	if (abs(posLast[2] - pos[2]) > 15) {
		f2.write(pos[2]);

	}
	if (abs(posLast[3] - pos[3]) > 15) {
		f3.write(pos[3]);

	}
	if (abs(posLast[4] - pos[4]) > 15) {
		f4a.write(pos[4]);
		f4b.write(abs(170 - (pos[4] / 2)));

	}

	posLast[0] = pos[0];
	posLast[1] = pos[1];
	posLast[2] = pos[2];
	posLast[3] = pos[3];
	posLast[4] = pos[4];
}

void GetData(int numBytes) {
	
	//	If less information is transmitted than expected, drop data
	if (numBytes < 5) {

		Serial.println("ERROR: Not enough data, dropping bytes.");
		for (int i = 0; i < numBytes; ++i) {
			Wire.read();
		}
		return;
	}

	//	Write data to position array
	for (int i = 0; i < numBytes; ++i) {
		pos[i % 5] = Wire.read();
	}

}