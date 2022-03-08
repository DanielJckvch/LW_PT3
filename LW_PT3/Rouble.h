#pragma once

class rouble
{
protected:
	double roub_count;
	double ratio;
public:
	virtual ~rouble(void);
	virtual double convert_to_rouble(double v) = 0;
	virtual double convert_from_rouble(double v) = 0;

};
