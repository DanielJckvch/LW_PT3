#include "Euro.h"
#include <iostream>
using namespace std;

euro::euro()
{
	cout << "Enter euro/rouble ratio" << endl;
	cin >> euro_ratio;
	euro_ratio = (euro_ratio == 0.0) ? 1 : euro_ratio;
	euro_ctr++;
}

double euro::convert_to_rouble(double v)
{
	return v / euro_ratio;
}
double euro::convert_from_rouble(double v) 
{
	return v * euro_ratio;
}

void euro::change_ratio(double new_r)
{
	euro_ratio = new_r;
}


int euro::getctr(void)
{
	return euro_ctr;
}

euro::~euro()
{
	euro_ctr--;
}

double euro::get_ratio(void)
{
	return euro_ratio;
}

int euro::euro_ctr = 0;