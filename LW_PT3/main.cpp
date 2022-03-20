#include <iostream>
#include <fstream>
#include "Euro.h"
#include "Dollar.h"
#include "Pound.h"
#include "Yen.h"
using namespace std;
/*
* Вариант 16. Создать базовый абстрактный класс «Рубль», наследниками являются «Евро», «Доллар»,
«Фунт стерлингов» и «Японская иена». С клавиатуры вводятся соотношения валют друг
относительно друга. Определить функции преобразования рублей в соответствующую валюту и
наоборот, и вывод на экран.
*/
//СДЕЛАТЬ ВЫВОД В ФАЙЛ, ДОБАВИТЬ override
int main(void)
{
	euro* list_euro = NULL;
	dollar* list_dollar = NULL;
	pound* list_pound = NULL;
	yen* list_yen = NULL;
	int i = 0;
	int ctr = 0;
	double v;
	int sw;
	rouble* p = NULL;
	i = 0;
	cout << "Enter currency converters mode: 0-exit, 1-add/pick euro, 2-add/pick dollar, 3-add/pick pound, 4-add/pick yen, 5-delete, 6-convert from rouble, 7-convert to rouble, 8-change ratio, 9-load to file;" << endl;
	cin >> sw;
	cout << endl;
	while (sw != 0) {

		switch (sw)
		{
		case 1:
			cout << "Enter index:" << endl;
			cin >> i;
			if (i < -1 || i > 9)
			{
				cout << "This index does not exist" << endl;
				break;
			}
			if (i > list_euro->getctr())
			{
				cout << "Element with this index does not exist" << endl;
				break;
			}
			if (i < 0)
			{
				if (!list_euro)
				{
					list_euro = new euro;
					p = list_euro;
				}
				else
				{
					while (p->get_next())
					{
						p = p->get_next();
					}
					p->set_next();
				}
			}
			else
			{
				p = list_euro;
				while (--i)
				{
					p = p->get_next();
				}
			}
			cout << endl;
			break;
		case 2:
			cout << "Enter index:" << endl;
			cin >> i;
			if (i < -1 || i > 9)
			{
				cout << "This index does not exist" << endl;
				break;
			}
			if (i > list_dollar->getctr())
			{
				cout << "Element with this index does not exist" << endl;
				break;
			}
			if (i < 0)
			{
				if (!list_dollar)
				{
					list_dollar = new dollar;
					p = list_dollar;
				}
				else
				{
					while (p->get_next())
					{
						p = p->get_next();
					}
					p->set_next();
				}
			}
			else
			{
				p = list_dollar;
				while (--i)
				{
					p = p->get_next();
				}
			}
			cout << endl;
			break;
		case 3:
			cout << "Enter index:" << endl;
			cin >> i;
			if (i < -1 || i > 9)
			{
				cout << "This index does not exist" << endl;
				break;
			}
			if (i > list_pound->getctr())
			{
				cout << "Element with this index does not exist" << endl;
				break;
			}
			if (i < 0)
			{
				if (!list_pound)
				{
					list_pound = new pound;
					p = list_pound;
				}
				else
				{
					while (p->get_next())
					{
						p = p->get_next();
					}
					p->set_next();
				}
			}
			else
			{
				p = list_pound;
				while (--i)
				{
					p = p->get_next();
				}
			}
			cout << endl;
			break;
		case 4:
			cout << "Enter index:" << endl;
			cin >> i;
			if (i < -1 || i > 9)
			{
				cout << "This index does not exist" << endl;
				break;
			}
			if (i > list_yen->getctr())
			{
				cout << "Element with this index does not exist" << endl;
				break;
			}
			if (i < 0)
			{
				if (!list_yen)
				{
					list_yen = new yen;
					p = list_yen;
				}
				else
				{
					while (p->get_next())
					{
						p = p->get_next();
					}
					p->set_next();
				}
			}
			else
			{
				p = list_yen;
				while (--i)
				{
					p = p->get_next();
				}
			}
			cout << endl;
			break;
		case 5:
			if (!p)
			{
				cout << "This element is not exist" << endl;
				break;
			}
			p->del_next();
			cout << endl;
			break;
		case 6:
			cout << "Enter rouble:" << endl;
			cin >> v;
			v = p->convert_from_rouble(v);
			cout << "Currency:" << v << endl;
			cout << endl;
			break;
		case 7:
			cout << "Enter currency:" << endl;
			cin >> v;
			v = p->convert_to_rouble(v);
			cout << "Rouble:" << v << endl;
			cout << endl;
			break;
		case 8:
			cout << "Enter new ratio:" << endl;
			cin >> v;
			p->change_ratio(v);
			cout << endl;
			break;
		case 9:
			/*ofstream f;
			ctr = list_euro->getctr();
			p = list_euro;
			for (i = 0;i < ctr;i++)
			{
				p = p->get_next();
				delete p;
			}
			ctr = list_dollar->getctr();
			p = list_dollar;
			for (i = 0;i < ctr;i++)
			{
				p = list_dollar;
				list_dollar = list_dollar->get_next();
				delete p;
			}
			ctr = list_pound->getctr();
			p = list_pound;
			for (i = 0;i < ctr;i++)
			{
				p = list_pound;
				list_pound = list_pound->get_next();
				delete p;
			}
			ctr = list_yen->getctr();
			p = list_yen;
			for (i = 0;i < ctr;i++)
			{
				p = list_yen;
				list_yen = list_yen->get_next();
				delete p;
			}*/
		default:
			cout << "Uncorrect mode. Try again:" << endl;
		}
		cout << "Enter currency converters mode: 0-exit, 1-add/pick euro, 2-add/pick dollar, 3-add/pick pound, 4-add/pick yen, 5-delete, 6-convert from rouble, 7-convert to rouble, 8-change ratio;" << endl;
		cin >> sw;
	}
	ctr = list_euro->getctr();
	p = list_euro;
	for (i = 0;i < ctr;i++)
	{
		p = list_euro;
		list_euro = list_euro->get_next();
		delete p;
	}
	ctr = list_dollar->getctr();
	p = list_dollar;
	for (i = 0;i < ctr;i++)
	{
		p = list_dollar;
		list_dollar = list_dollar->get_next();
		delete p;
	}
	ctr = list_pound->getctr();
	p = list_pound;
	for (i = 0;i < ctr;i++)
	{
		p = list_pound;
		list_pound = list_pound->get_next();
		delete p;
	}
	ctr = list_yen->getctr();
	p = list_yen;
	for (i = 0;i < ctr;i++)
	{
		p = list_yen;
		list_yen = list_yen->get_next();
		delete p;
	}


	return 0;
}
