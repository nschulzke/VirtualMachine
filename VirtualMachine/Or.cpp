#include "Or.h"

Or::Or() : LogicGate()
{
	norGate.setDrain(notGate.getWire1());
}

void Or::update()
{
	norGate.getWire1()->setSource(inputA);
	norGate.getWire2()->setSource(inputB);
	outputVal = notGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
