#pragma once

#include "Merger.h"
#include "And.h"
#include "Not.h"
#include "Splitter.h"

class Decoder2 : public LogicGate
{
public:
	Decoder2();
	void setDrain(Wire* target);
	void setDrain(Wire* target, size_t index);
	bool checkDrain() const;
protected:
	static const int SIZE = 4;
	void update();
	Wire** lastWire;
	Wire* drains[SIZE];
	And outputs[SIZE];

	Not notA;
	Splitter splitNotA;
	Not notB;
	Splitter splitNotB;
};

