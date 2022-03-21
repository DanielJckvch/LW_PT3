#include "Yen.h"
#include <iostream>
using namespace std;

yen::yen()
{
	cout << "Enter yen/rouble ratio" << endl;
	cin >> yen_ratio;
	yen_ratio = (yen_ratio == 0.0) ? 1 : yen_ratio;
	yen_ctr++;
}

double yen::convert_to_rouble(double v)
{
	return v / yen_ratio;
}
double yen::convert_from_rouble(double v)
{
	return v * yen_ratio;
}

void yen::change_ratio(double new_r)
{
	yen_ratio = new_r;
}

int yen::getctr(void)
{
	return yen_ctr;
}

yen::~yen()
{
	yen_ctr--;
}

double yen::get_ratio(void)
{
	return yen_ratio;
}

int yen::yen_ctr = 0;