#pragma once

#include "Wire.h"

class Splitter : public Wire
{
public:
	Splitter(Wire* drain1In = nullptr, bool sourceIn = false) : Wire(drain1In, sourceIn),
		drain2(nullptr)
	{};
	Splitter(Wire* drain1In, Wire* drain2In, bool sourceIn = false) : Wire(drain1In, sourceIn),
		drain2(drain2In)
	{};
	void setDrain2(Wire* target);
	bool checkDrain() const;
protected:
	void update();
	Wire* drain2;
};