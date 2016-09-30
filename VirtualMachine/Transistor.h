#pragma once

#include "Wire.h"

class Transistor : public Wire
{
public:
	Transistor(Wire* drainIn = nullptr, bool sourceIn = false) : Wire(drainIn, sourceIn),
		gate(false)
	{};
	void setGate(bool bitIn);
	bool getOutput() const;
	virtual bool checkDrain() const = 0;
protected:
	bool gate;
};