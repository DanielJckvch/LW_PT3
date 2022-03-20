#include "Pound.h"
#include <iostream>
using namespace std;

pound::pound()
{
	cout << "Enter pound/rouble ratio" << endl;
	cin >> pound_ratio;
	pound_ratio = (pound_ratio == 0.0) ? 1 : pound_ratio;
	next = NULL;
	pound_ctr++;
}

double pound::convert_to_rouble(double v)
{
	return v / pound_ratio;
}
double pound::convert_from_rouble(double v)
{
	return v * pound_ratio;
}

void pound::change_ratio(double new_r)
{
	pound_ratio = new_r;
}

pound* pound::get_next(void)
{
	return next;
}

void pound::set_next(void)
{
	next = new pound;
}

void pound::del_next(void)
{
	pound* temp;
	temp = next;
	if (!next)
	{
		cout << "Next element is not exist" << endl;
	}
	next = next->next;
	delete temp;
}

int pound::getctr(void)
{
	return pound_ctr;
}

pound::~pound()
{
	pound_ctr--;
}

double pound::get_ratio(void)
{
	return pound_ratio;
}

int pound::pound_ctr = 0;