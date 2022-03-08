#pragma once
#include "Rouble.h"

class euro final :public rouble
{
public:
	euro();
	double convert_to_rouble(double v);
	double convert_from_rouble(double v);
};
