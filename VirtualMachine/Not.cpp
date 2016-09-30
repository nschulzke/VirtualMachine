#include "Not.h"

void Not::update()
{
	transP.setGate(inputA);
	transN.setGate(inputA);
	outputVal = splitter.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
