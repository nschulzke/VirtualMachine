#include "Xnor.h"

Xnor::Xnor()
{
	nandGateIn.setDrain(nandGateOut.getWireIn1());
	orGate.setDrain(nandGateOut.getWireIn2());
}

void Xnor::update()
{
	nandGateIn.getWireIn1()->setSource(inputA);
	orGate.getWireIn1()->setSource(inputA);
	nandGateIn.getWireIn2()->setSource(inputB);
	orGate.getWireIn2()->setSource(inputB);
	outputVal = nandGateOut.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
