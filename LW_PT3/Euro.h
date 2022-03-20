#pragma once
#include "Rouble.h"

class euro final :public rouble
{
private:
	static int euro_ctr;
	double euro_ratio;
	euro* next;
public:
	
	
	euro();
	~euro();
	double convert_to_rouble(double v) override;
	double convert_from_rouble(double v) override;
	void change_ratio(double new_r) override;
	euro* get_next(void) override;
	void set_next(void) override;
	void del_next(void) override;
	int getctr(void);
	double get_ratio(void) override;
};
