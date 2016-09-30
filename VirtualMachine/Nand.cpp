#include "Nand.h"

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