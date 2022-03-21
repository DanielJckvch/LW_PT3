#pragma once

class rouble
{
private:
	static int base_ctr;
public:
	rouble(void);
	virtual ~rouble(void);
	int getbasectr(void);
	virtual int getctr(void) = 0;
	virtual double convert_to_rouble(double v) = 0;
	virtual double convert_from_rouble(double v) = 0;
	virtual void change_ratio(double new_r) = 0;
	virtual double get_ratio(void) = 0;

};
