#pragma once
#include "Rouble.h"
class pound final :public rouble
{
private:
	double pound_ratio;
	static int pound_ctr;
public:
	pound();
	~pound();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	int getctr(void) override;
	double get_ratio(void) override;
};
