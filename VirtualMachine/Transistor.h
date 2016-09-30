#pragma once

#include "Wire.h"

class Transistor : public Wire
{
public:
	explicit Transistor() : gate(false), Wire() {};
	void setGate(bool bitIn);
	bool getOutput() const;
	virtual bool checkDrain() const = 0;
protected:
	bool gate;
};