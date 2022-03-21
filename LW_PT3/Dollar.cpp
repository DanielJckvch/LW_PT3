#include "Dollar.h"
#include <iostream>
using namespace std;

dollar::dollar() 
{
	cout << "Enter dollar/rouble ratio" << endl;
	cin >> dollar_ratio;
	dollar_ratio = (dollar_ratio == 0.0) ? 1 : dollar_ratio;
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