#pragma once

#include "Transistor.h"

class N_type : public Transistor
{
public:
	bool checkDrain() const;
};