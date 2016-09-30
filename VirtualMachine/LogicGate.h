#pragma once

#include "Wire.h"
#include "Merger.h"

class LogicGate : public Merger
{
public:
	LogicGate(Wire* drainIn = nullptr) : Merger(drainIn),
		inputA(false),
		inputB(false)
	{};
	virtual void setSource(bool bitIn);
	bool getOutput() const;
protected:
	virtual void update() = 0;		// Logic gates must override the update() function
	bool inputA;
	bool inputB;
	bool outputVal;
};