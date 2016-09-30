#include "LogicGate.h"

bool LogicGate::getOutput() const
{
	return outputVal;
}

void LogicGate::setSource(bool bitIn)
{
	inputA = wireIn1.getOutput();
	inputB = wireIn2.getOutput();
	update();
}