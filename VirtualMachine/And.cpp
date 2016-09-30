#include "And.h"

void And::update()
{
	nandGate.getWireIn1()->setSource(inputA);
	nandGate.getWireIn2()->setSource(inputB);
	outputVal = notGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
