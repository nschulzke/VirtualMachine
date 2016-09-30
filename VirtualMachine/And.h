#pragma once

#include "LogicGate.h"
#include "Nand.h"
#include "Not.h"

class And : public LogicGate
{
public:
	And();
protected:
	void update();
	Nand nandGate;
	Not notGate;
};