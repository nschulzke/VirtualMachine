#include "Merger.h"

Merger::Merger() : Wire()
{
	wire1.setDrain(this);
	wire2.setDrain(this);
}

void Merger::setSource(bool bitIn)
{
	bool out1 = wire1.getOutput();
	bool out2 = wire2.getOutput();
	source = (out1 || out2);
	update();
}

Wire* Merger::getWire1()
{
	Wire* retPtr = &wire1;
	return retPtr;
}

Wire* Merger::getWire2()
{
	Wire* retPtr = &wire2;
	return retPtr;
}