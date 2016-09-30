#pragma once

#include "Transistor.h"

class N_type : public Transistor
{
public:
	N_type(Wire* drainIn = nullptr, bool sourceIn = false) : Transistor(drainIn, sourceIn) {};
	bool checkDrain() const;
};