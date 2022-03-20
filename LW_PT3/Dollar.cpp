#include "Dollar.h"
#include <iostream>
using namespace std;

dollar::dollar() 
{
	cout << "Enter dollar/rouble ratio" << endl;
	cin >> dollar_ratio;
	dollar_ratio = (dollar_ratio == 0.0) ? 1 : dollar_ratio;
	next = NULL;
	dollar_ctr++;
}

double dollar::convert_to_rouble(double v)
{
	return v / dollar_ratio;
}
double dollar::convert_from_rouble(double v)
{
	return v * dollar_ratio;
}

void dollar::change_ratio(double new_r)
{
	dollar_ratio = new_r;
}

dollar* dollar::get_next(void)
{
	return next;
}

void dollar::set_next(void)
{
	next = new dollar;
}

void dollar::del_next(void)
{
	dollar* temp;
	temp = next;
	if (!next)
	{
		cout << "Next element is not exist" << endl;
	}
	next = next->next;
	delete temp;
}

int dollar::getctr(void)
{
	return dollar_ctr;
}

dollar::~dollar()
{
	dollar_ctr--;
}

double dollar::get_ratio(void)
{
	return dollar_ratio;
}

int dollar::dollar_ctr = 0;