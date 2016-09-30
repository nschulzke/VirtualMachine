#pragma once

#include "Wire.h"

class Merger : public Wire
{
public:
	explicit Merger();
	void setSource(bool bitIn);
	Wire* getWire1();
	Wire* getWire2();
protected:
	Wire wire1;
	Wire wire2;
};