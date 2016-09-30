#include "Merger.h"

Merger::Merger() : Wire()
{
	wireIn1.setDrain(this);
	wireIn2.setDrain(this);
}

void Merger::setSource(bool bitIn)
{
	bool out1 = wireIn1.getOutput();
	bool out2 = wireIn2.getOutput();
	source = (out1 || out2);
	update();
}

Wire* Merger::getWireIn1()
{
	Wire* retPtr = &wireIn1;
	return retPtr;
}

Wire* Merger::getWireIn2()
{
	Wire* retPtr = &wireIn2;
	return retPtr;
}