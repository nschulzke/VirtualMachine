#pragma once

#include "Wire.h"
#include "Merger.h"

class LogicGate : public Merger
{
public:
	explicit LogicGate() : inputA(false), inputB(false), Merger() {};
	virtual void setSource(bool bitIn);
	bool getOutput() const;
protected:
	virtual void update() = 0;		// Logic gates must override the update() function
	bool inputA;
	bool inputB;
	bool outputVal;
};