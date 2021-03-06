#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Or.h"
#include "And.h"

class Xor : public LogicGate
{
public:
	Xor(Wire* drainIn = nullptr) : LogicGate(drainIn),
		nandGate(andGate.getWireIn1()),
		orGate(andGate.getWireIn2())
	{}
protected:
	void update();
	Nand nandGate;
	Or orGate;
	And andGate;
};

