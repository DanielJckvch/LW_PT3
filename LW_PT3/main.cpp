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
//СДЕЛАТЬ ВЫВОД В ФАЙЛ

template <typename T>
struct el
{
	T* cur;
	el<T>* next;
};
template <typename T>
class list
{
private:
	el<T>* head;
	int ind;
public:
	list();
	~list();
	T* getptr(int i);
	void add(void);
	void del(int i);
	void show(void);
	int get_ind(void);
};



template <typename cl1, typename cl2>
void proc(cl1& ob, cl2** p)
{
	int sw;
	int i;
	cl1* del;
	cout << "Enter list processing mode: 0: exit, 1: add, 2: pick, 3: delete;" << endl;
	cin >> sw;
	while (sw)
	{
		switch (sw)
		{
		case 1:
			ob.add();
			break;
		case 2:
			cout << "Enter index:" << endl;
			cin >> i;
			*p = ob.getptr(i);
			break;
		case 3:
			cout << "Enter index:" << endl;
			cin >> i;
			ob.del(i);
			if (i == ob.get_ind())
			{
				*p = ob.getptr(i - 1);
			}
			break;
		default:
			cout << "Uncorrect mode. Try again:" << endl;
		}
		cout << "Enter list processing mode: 0: exit, 1: add, 2: pick, 3: delete;" << endl;
		cin >> sw;
	}
}
int main(void)
{
	list <euro> list_euro;
	list <dollar> list_dollar;
	list <pound> list_pound;
	list <yen> list_yen;
	rouble* p = NULL;
	rouble* fp = 0;
	ofstream f;
	int i = 0;
	int ctr = 0;
	double v;
	int sw;
	cout << "Enter currency converters mode: 0: exit; processing list: 1: euro, 2: dollar, 3: pound, 4: yen; 5: show lists, 6: convert from rouble; 7: convert to rouble; 8: change ratio; 9: show base counter; 10: load to file;" << endl;
	cin >> sw;
	cout << endl;
	while (sw != 0) {

		switch (sw)
		{
		case 1:
			proc(list_euro, &p);
			cout << endl;
			break;
		case 2:
			proc(list_dollar, &p);
			cout << endl;
			break;
		case 3:
			proc(list_pound, &p);
			cout << endl;
			break;
		case 4:
			proc(list_yen, &p);
			cout << endl;
			break;
		case 5:
			cout << "Euro list:" << endl;
			list_euro.show();
			cout << "Dollar list:" << endl;
			list_dollar.show();
			cout << "Pound list:" << endl;
			list_pound.show();
			cout << "Yen list:" << endl;
			list_yen.show();
			cout << endl;
			break;
		case 6:
			if (!p)
			{
				cout << "Base pointer is null;" << endl;
				break;
			}
			cout << "Enter rouble:" << endl;
			cin >> v;
			v = p->convert_from_rouble(v);
			cout << "Currency:" << v << endl;
			cout << endl;
			break;
		case 7:
			if (!p)
			{
				cout << "Base pointer is null;" << endl;
				break;
			}
			cout << "Enter currency:" << endl;
			cin >> v;
			v = p->convert_to_rouble(v);
			cout << "Rouble:" << v << endl;
			cout << endl;
			break;
		case 8:
			if (!p)
			{
				cout << "Base pointer is null;" << endl;
				break;
			}
			cout << "Enter new ratio:" << endl;
			cin >> v;
			p->change_ratio(v);
			cout << endl;
			break;
		case 9:
			if (!p)
			{
				cout << "Base pointer is null;" << endl;
				break;
			}
			cout << "Base counter:" << p->getbasectr() << endl;
			break;
		case 10:
			
			f.open("data.txt");
			fp = list_euro.getptr(1);
			if (fp)
			{
				ctr = fp->getctr();
				f << "Euro:" << endl;
				for (i = 1;i <= ctr;i++)
				{
					fp = list_euro.getptr(i);
					f << "Ratio number " << i << " with value: " << fp->get_ratio() << ';' << endl;
				}
				f << endl;
			}
			
			fp = list_dollar.getptr(1);
			if (fp)
			{
				ctr = fp->getctr();
				f << "Dollar:" << endl;
				for (i = 1;i <= ctr;i++)
				{
					fp = list_dollar.getptr(i);
					f << "Ratio number " << i << " with value: " << fp->get_ratio() << ';' << endl;
				}
				f << endl;
			}
			
			fp = list_pound.getptr(1);
			if (fp)
			{
				ctr = fp->getctr();
				f << "Pound:" << endl;
				for (i = 1;i <= ctr;i++)
				{
					fp = list_pound.getptr(i);
					f << "Ratio number " << i << " with value: " << fp->get_ratio() << ';' << endl;
				}
				f << endl;
			}
			
			fp = list_yen.getptr(1);
			if (fp)
			{
				ctr = fp->getctr();
				f << "Yen:" << endl;
				for (i = 1;i <= ctr;i++)
				{
					fp = list_yen.getptr(i);
					f << "Ratio number " << i << " with value: " << fp->get_ratio() << ';' << endl;
				}
				f << endl;
			}
			
			f.close();
			break;
		default:
			cout << "Uncorrect mode. Try again:" << endl;
		}
		cout << "Enter currency converters mode: 0: exit; processing list: 1: euro, 2: dollar, 3: pound, 4: yen; 5: show lists, 6: convert from rouble; 7: convert to rouble; 8: change ratio; 9: show base counter; 10: load to file;" << endl;
		cin >> sw;
	}

	return 0;
}

template <typename T>
list<T>::list(void)
{
	head = 0;
	ind = 0;
}
template <typename T>
list<T>::~list(void)
{
	el<T>* temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		delete temp->cur;
		delete temp;
	}
}
template <typename T>
T* list<T>::getptr(int i)
{
	el<T>* temp = head;
	if (!head)
	{
		cout << "List is empty;" << endl;
		return 0;
	}
	if (i > head->cur->getctr() || i < 1)
	{
		cout << "Uncorrect index;" << endl;
		return 0;
	}
	ind = i;
	while (--i)
	{
		temp = temp->next;
	}
	return temp->cur;
}
template <typename T>
void list<T>::add(void)
{
	el<T>* temp = new el<T>;
	temp->cur = new T;
	temp->next = head;
	head = temp;


}
template <typename T>
void list<T>::del(int i)
{
	el<T>* ptr = head;
	if (!head)
	{
		cout << "List is empty;" << endl;
		return;
	}
	if (i > head->cur->getctr() || i < 1)
	{
		cout << "Uncorrect index;" << endl;
		return;
	}
	el<T>* temp = 0;
	if (i == 1)
	{
		temp = head;
		head = head->next;
		delete temp->cur;
		delete temp;
		return;
	}
	i = i - 2;
	while (i > 0)
	{
		ptr = ptr->next;
		i = i - 1;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	delete temp->cur;
	delete temp;

}
template <typename T>
void list<T>::show(void)
{
	if (!head)
	{
		cout << "List is empty;" << endl;
		return;
	}
	el<T>* cur_ptr = head;
	int i = 1;
	while (cur_ptr)
	{
		cout << "Ratio number " << i << " with value: " << cur_ptr->cur->get_ratio() << ';' << endl;
		cur_ptr = cur_ptr->next;
		i++;
	}
}

template <typename T>
int list<T>::get_ind(void)
{
	return ind;
}
