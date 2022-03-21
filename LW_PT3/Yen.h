#pragma once
#include "Rouble.h"
class yen final :public rouble
{
private:
	static int yen_ctr;
	double yen_ratio;
public:
	yen();
	~yen();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	int getctr(void) override;
	double get_ratio(void) override;
};
