#pragma once
#include "Rouble.h"

class euro final :public rouble
{
private:
	static int euro_ctr;
	double euro_ratio;
	
public:

	euro();
	~euro();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	int getctr(void) override;
	double get_ratio(void) override;
};
