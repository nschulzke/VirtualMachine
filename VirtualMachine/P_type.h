#pragma once

#include "Transistor.h"

class P_type : public Transistor
{
public:
	P_type(Wire* drainIn = nullptr, bool sourceIn = false) : Transistor(drainIn, sourceIn) {};
	bool checkDrain() const;
};