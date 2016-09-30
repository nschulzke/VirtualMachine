#include "Wire.h"

void Wire::setSource(bool bitIn)
{
	source = bitIn;
	update();
}

void Wire::setDrain(Wire * target)
{
	drain = target;
	update();
}

bool Wire::checkDrain() const
{
	if (drain == nullptr)
		return true;
	else
		return drain->checkDrain();
}

bool Wire::getOutput() const
{
	return source;
}

void Wire::update()
{
	if (drain != nullptr)
		drain->setSource(this->getOutput());
}
