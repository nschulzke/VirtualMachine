#include "Transistor.h"

bool Transistor::getOutput() const
{
	if (source == true && this->checkDrain() == true)
		return true;
	else
		return false;
}

void Transistor::setGate(bool bitIn)
{
	gate = bitIn;
	update();
}