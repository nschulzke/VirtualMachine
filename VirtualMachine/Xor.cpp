#include "Xor.h"

Xor::Xor()
{
	nandGate.setDrain(andGate.getWire1());
	orGate.setDrain(andGate.getWire2());
}

void Xor::update()
{
	nandGate.getWire1()->setSource(inputA);
	orGate.getWire1()->setSource(inputA);
	nandGate.getWire2()->setSource(inputB);
	orGate.getWire2()->setSource(inputB);
	outputVal = andGate.getOutput();
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
