#include <iostream>
#include "Euro.h"
using namespace std;
/*
* ������� 16. ������� ������� ����������� ����� �������, ������������ �������� �����, �������,
����� ���������� � ��������� ����. � ���������� �������� ����������� ����� ����
������������ �����. ���������� ������� �������������� ������ � ��������������� ������ �
��������, � ����� �� �����.
*/

int main(void)
{
	double f;
	rouble* p;
	euro e;
	p = &e;
	cout << "Enter rouble:"<<endl;
	cin >> f;
	f=p->convert_from_rouble(f);
	cout << "Euro:"<<f << endl;
	cout << endl;
	cout << "Enter euro:" << endl;
	cin >> f;
	f = p->convert_to_rouble(f);
	cout << "Rouble:" << f << endl;
	return 0;
}