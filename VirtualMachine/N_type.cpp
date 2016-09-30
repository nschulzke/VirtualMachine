#include "N_type.h"

bool N_type::checkDrain() const
{
	if (gate == true)
		return Wire::checkDrain();
	else
		return false;
}
