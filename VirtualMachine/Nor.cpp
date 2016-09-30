#include "Nor.h"

Nor::Nor()
{
	transPA.setSource(true);
	transPA.setDrain(&transPB);
	transPB.setDrain(&splitOutput);
	splitOutput.setDrain(&splitN);
	splitN.setDrain(&transNA);
	splitN.setDrain2(&transNB);
}

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
