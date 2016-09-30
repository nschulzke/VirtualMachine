#include "Nand.h"

Nand::Nand() : LogicGate()
{
	transPA.setSource(true);
	transPB.setSource(true);
	transPA.setDrain(mergerP.getWireIn1());
	transPB.setDrain(mergerP.getWireIn2());
	mergerP.setDrain(&splitterP);
	splitterP.setDrain(&transNA);
	transNA.setDrain(&transNB);
}

void Nand::update()
{
	transNA.setGate(inputA);
	transPA.setGate(inputA);
	transNB.setGate(inputB);
	transPB.setGate(inputB);
	outputVal = mergerP.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}