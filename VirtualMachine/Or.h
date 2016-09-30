#pragma once

#include "LogicGate.h"
#include "NOr.h"
#include "Not.h"

class Or : public LogicGate
{
public:
	Or();
protected:
	void update();
	Nor norGate;
	Not notGate;
};