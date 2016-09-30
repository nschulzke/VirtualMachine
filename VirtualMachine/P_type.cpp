#include "P_type.h"

bool P_type::checkDrain() const
{
	if (gate == false)
		return Wire::checkDrain();
	else
		return false;
}
