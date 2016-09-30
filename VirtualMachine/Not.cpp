#include "Not.h"

Not::Not() : LogicGate()
{
	transP.setDrain(&splitter);
	splitter.setDrain(&transN);
	transP.setSource(true);
}

void Not::update()
{
	transP.setGate(inputA);
	transN.setGate(inputA);
	outputVal = splitter.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
