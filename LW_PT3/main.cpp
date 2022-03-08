#include <iostream>
#include "Euro.h"
using namespace std;
/*
* Вариант 16. Создать базовый абстрактный класс «Рубль», наследниками являются «Евро», «Доллар»,
«Фунт стерлингов» и «Японская иена». С клавиатуры вводятся соотношения валют друг
относительно друга. Определить функции преобразования рублей в соответствующую валюту и
наоборот, и вывод на экран.
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