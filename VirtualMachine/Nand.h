#pragma once

#include "LogicGate.h"
#include "P_type.h"
#include "N_type.h"
#include "Merger.h"
#include "Splitter.h"

class Nand : public LogicGate
{
public:
	Nand(Wire* drainIn = nullptr) : LogicGate(drainIn),
		transPA(mergerP.getWireIn1(), true),
		transPB(mergerP.getWireIn2(), true),
		mergerP(&splitterP),
		splitterP(&transNA),
		transNA(&transNB)
	{};
protected:
	void update();
	P_type transPA;
	P_type transPB;
	Merger mergerP;
	Splitter splitterP;
	N_type transNA;
	N_type transNB;
};