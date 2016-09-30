#include "Xnor.h"

Xnor::Xnor()
{
	nandGateIn.setDrain(nandGateOut.getWire1());
	orGate.setDrain(nandGateOut.getWire2());
}

void Xnor::update()
{
	nandGateIn.getWire1()->setSource(inputA);
	orGate.getWire1()->setSource(inputA);
	nandGateIn.getWire2()->setSource(inputB);
	orGate.getWire2()->setSource(inputB);
	outputVal = nandGateOut.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
