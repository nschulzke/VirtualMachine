#include "Xor.h"

Xor::Xor()
{
	nandGate.setDrain(andGate.getWireIn1());
	orGate.setDrain(andGate.getWireIn2());
}

void Xor::update()
{
	nandGate.getWireIn1()->setSource(inputA);
	orGate.getWireIn1()->setSource(inputA);
	nandGate.getWireIn2()->setSource(inputB);
	orGate.getWireIn2()->setSource(inputB);
	outputVal = andGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
