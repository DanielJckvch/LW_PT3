#pragma once
#include "Rouble.h"
class yen final :public rouble
{
private:
	static int yen_ctr;
	double yen_ratio;
	yen* next;
public:
	yen();
	~yen();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	yen* get_next(void) override;
	void set_next(void) override;
	void del_next(void) override;
	int getctr(void) ;
	double get_ratio(void) override;
};
