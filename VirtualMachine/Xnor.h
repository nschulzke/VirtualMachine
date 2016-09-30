#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Or.h"

class Xnor : public LogicGate
{
public:
	Xnor(Wire* drainIn = nullptr) : LogicGate(drainIn),
		nandGateIn(nandGateOut.getWireIn1()),
		orGate(nandGateOut.getWireIn2())
	{};
protected:
	void update();
	Nand nandGateIn;
	Or orGate;
	Nand nandGateOut;
};

