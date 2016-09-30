#pragma once

#include "LogicGate.h"
#include "P_type.h"
#include "N_type.h"
#include "Splitter.h"

class Nor : public LogicGate
{
public:
	Nor();
protected:
	void update();
	P_type transPA;
	P_type transPB;
	Splitter splitOutput;
	Splitter splitN;
	N_type transNA;
	N_type transNB;
};

