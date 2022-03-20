#pragma once
#include "Rouble.h"
class pound final :public rouble
{
private:
	double pound_ratio;
	static int pound_ctr;
	pound* next;
public:
	pound();
	~pound();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	pound* get_next(void) override;
	void set_next(void) override;
	void del_next(void) override;
	int getctr(void);
	double get_ratio(void) override;
};
