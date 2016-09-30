#include "And.h"

And::And() : LogicGate()
{
	nandGate.setDrain(notGate.getWire1());
}

void And::update()
{
	nandGate.getWire1()->setSource(inputA);
	nandGate.getWire2()->setSource(inputB);
	outputVal = notGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
