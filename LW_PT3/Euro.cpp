#include "Euro.h"
#include <iostream>
using namespace std;

euro::euro()
{
	cout << "Enter euro/rouble ratio" << endl;
	cin >> ratio;
	ratio = (ratio == 0.0) ? 1 : ratio;
}

double euro::convert_to_rouble(double v)
{
	return v / ratio;
}
double euro::convert_from_rouble(double v)
{
	return v * ratio;
}