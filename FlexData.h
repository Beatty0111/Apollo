#pragma once

//	Holds positional data for each servo (0-180)
struct FlexData {
	uint8_t pos1, pos2, pos3, pos4, pos5;

	FlexData(uint8_t fin1, uint8_t fin2, uint8_t fin3, uint8_t fin4, uint8_t fin5) :
		pos1(fin1), pos2(fin2), pos3(fin3), pos4(fin4), pos5(fin5) {}
	FlexData() {}
};