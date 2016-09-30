#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Not.h"

class And : public LogicGate
{
public:
	And(Wire* drainIn = nullptr) : LogicGate(drainIn),
		nandGate(notGate.getWireIn1())
	{};
protected:
	void update();
	Nand nandGate;
	Not notGate;
};