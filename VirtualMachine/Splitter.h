#pragma once

#include "Wire.h"

class Splitter : public Wire
{
public:
	Splitter() : drain2(nullptr), Wire() {}
	void setDrain2(Wire* target);
	bool checkDrain() const;
protected:
	void update();
	Wire* drain2;
};