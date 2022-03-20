#pragma once

class rouble
{
public:
	virtual ~rouble(void);
	virtual double convert_to_rouble(double v) = 0;
	virtual double convert_from_rouble(double v) = 0;
	virtual void change_ratio(double new_r) = 0;
	virtual void set_next(void) = 0;
	virtual rouble* get_next(void) = 0;
	virtual void del_next(void) = 0;
	virtual double get_ratio(void) = 0;

};
