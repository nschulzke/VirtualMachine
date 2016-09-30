#pragma once

#include "Wire.h"

class Merger : public Wire
{
public:
	explicit Merger();
	void setSource(bool bitIn);
	Wire* getWireIn1();
	Wire* getWireIn2();
protected:
	Wire wireIn1;
	Wire wireIn2;
};