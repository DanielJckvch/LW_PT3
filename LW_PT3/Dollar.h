#pragma once
#include "Rouble.h"
class dollar final :public rouble
{
private:
	static int dollar_ctr;
	double dollar_ratio;
public:
	dollar();
	~dollar();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	int getctr(void) override;
	double get_ratio(void) override;
};