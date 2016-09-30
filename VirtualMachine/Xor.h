#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Or.h"
#include "And.h"

class Xor : public LogicGate
{
public:
	Xor();
protected:
	void update();
	Nand nandGate;
	Or orGate;
	And andGate;
};

