#include "LogicGate.h"

bool LogicGate::getOutput() const
{
	return outputVal;
}

void LogicGate::setSource(bool bitIn)
{
	inputA = wire1.getOutput();
	inputB = wire2.getOutput();
	update();
}