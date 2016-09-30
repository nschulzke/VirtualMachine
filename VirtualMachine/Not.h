#pragma once

#include "LogicGate.h"
#include "P_type.h"
#include "N_type.h"
#include "Splitter.h"

class Not : public LogicGate
{
public:
	Not();
protected:
	void update();
	P_type transP;
	Splitter splitter;
	N_type transN;
};