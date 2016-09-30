#pragma once

#include "Wire.h"

class Merger : public Wire
{
public:
	Merger::Merger(Wire* drainIn = nullptr, bool sourceIn = false) : Wire(drainIn, sourceIn),
		wireIn1(this),
		wireIn2(this)
	{};
	void setSource(bool bitIn);
	Wire* getWireIn1();
	Wire* getWireIn2();
protected:
	Wire wireIn1;
	Wire wireIn2;
};