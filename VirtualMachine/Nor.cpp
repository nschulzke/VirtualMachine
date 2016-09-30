#include "Nor.h"

void Nor::update()
{
	transNA.setGate(inputA);
	transPA.setGate(inputA);
	transNB.setGate(inputB);
	transPB.setGate(inputB);
	outputVal = splitOutput.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
