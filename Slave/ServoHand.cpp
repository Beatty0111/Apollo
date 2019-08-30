//// 
//// 
//// 
//
//#include "ServoHand.h"
//
//void ServoHandClass::init() {}
//
//void ServoHandClass::GetVal() {
//	//f1_.attach(4);
//	//f2_.attach(5);
//	//f3_.attach(A0);
//	//f4_.attach(7);
//	//f5_.attach(8);
//}
//
//ServoHandClass::ServoHandClass() {
//	//f1_.attach(4);
//	//f2_.attach(5);
//	f3_.attach(A0);
//	//f4_.attach(7);
//	//f5_.attach(8);
//}
//
//int ServoHandClass::SetPos(uint8_t* in) {
//	/*f1_.write(in[0]);
//	f2_.write(in[1]);*/
//	if (abs(lastPos[2] - in[2]) > 5) {
//		Serial.print("--");
//		Serial.println(abs(lastPos[2] - in[2]));
//		f3_.write(in[2]);
//		lastPos[2] = in[2];
//	}
//	else {
//		Serial.print("-");
//		Serial.println(abs(lastPos[2] - in[2]));
//		lastPos[2] = in[2];
//	}
//
//
//	/*f4_.write(in[3]);
//	f5_.write(in[4]);*/
//	return in[2];
//}
//
//ServoHandClass ServoHand;
//
