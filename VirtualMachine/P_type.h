#pragma once

#include "Transistor.h"

class P_type : public Transistor
{
public:
	bool checkDrain() const;
};