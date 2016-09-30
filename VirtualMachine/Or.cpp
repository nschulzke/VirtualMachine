#include "Or.h"

Or::Or() : LogicGate()
{
	norGate.setDrain(notGate.getWireIn1());
}

void Or::update()
{
	norGate.getWireIn1()->setSource(inputA);
	norGate.getWireIn2()->setSource(inputB);
	outputVal = notGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
