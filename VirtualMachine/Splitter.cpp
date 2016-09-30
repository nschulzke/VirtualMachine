#include "Splitter.h"

void Splitter::setDrain2(Wire * target)
{
	drain2 = target;
	update();
}

bool Splitter::checkDrain() const
{
	if (drain == nullptr || drain2 == nullptr)
		return true;
	else if (drain->checkDrain() == true || drain2->checkDrain() == true)
		return true;
	else
		return false;
}

void Splitter::update()
{
	if (drain != nullptr)
		drain->setSource(this->getOutput());
	if (drain2 != nullptr)
		drain2->setSource(this->getOutput());
}
