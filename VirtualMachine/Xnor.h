#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Or.h"

class Xnor : public LogicGate
{
public:
	Xnor();
protected:
	void update();
	Nand nandGateIn;
	Or orGate;
	Nand nandGateOut;
};

