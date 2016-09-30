#pragma once

#include "LogicGate.h"
#include "NOr.h"
#include "Not.h"

class Or : public LogicGate
{
public:
	Or(Wire* drainIn = nullptr) : LogicGate(drainIn),
		norGate(notGate.getWireIn1())
	{}
protected:
	void update();
	Nor norGate;
	Not notGate;
};