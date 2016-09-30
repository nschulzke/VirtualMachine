#include "Decoder2.h"

Decoder2::Decoder2() : lastWire(drains), LogicGate()
{
	notA.setDrain(&splitNotA);						// A is binary 1
	splitNotA.setDrain(outputs[0].getWireIn1());	// not in 0
	splitNotA.setDrain2(outputs[2].getWireIn1());	// not in 2

	notB.setDrain(&splitNotB);						// B is binary 2
	splitNotB.setDrain(outputs[0].getWireIn2());	// not in 0
	splitNotB.setDrain2(outputs[1].getWireIn2());	// not in 1
}

void Decoder2::update()
{
	notA.getWireIn1()->setSource(inputA);		// A is binary 1
	notB.getWireIn1()->setSource(inputB);		// B is binary 2

	outputs[1].getWireIn1()->setSource(inputA);
	// out1 wire2 feeds from notB

	// out2 wire1 feeds from notA
	outputs[2].getWireIn2()->setSource(inputB);

	outputs[3].getWireIn1()->setSource(inputA);
	outputs[3].getWireIn2()->setSource(inputB);
	
	for (size_t i = 0; i < SIZE; i++)
		drains[i]->setSource(outputs[i].getOutput());
}

void Decoder2::setDrain(Wire * target)
{
	lastWire++;
	if (lastWire < drains + SIZE)
		*lastWire = target;
	else
		lastWire--;
}

void Decoder2::setDrain(Wire * target, size_t index)
{
	if (index < SIZE)
		drains[index] = target;
}

bool Decoder2::checkDrain() const
{
	return false;
}