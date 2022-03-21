#include "List.h"
#include <iostream>
#include <fstream>
using namespace std;
template <typename T>
list<T>::list(void)
{
	head = 0;
}
template <typename T>
T* list<T>::getptr(int i)
{
	el<T> *temp = head;
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
	while (--i)
	{
		temp = temp->next;
	}
	return temp->cur;
}
template <typename T>
void list<T>::add(void)
{
	el<T> *temp = new el<T>;
	temp->cur = new T;
	temp->next = head;
	head = temp;
	
	
}
template <typename T>
void list<T>::del(int i)
{
	el<T> *ptr = head;
	if (!head)
	{
		cout << "List is empty;" << endl;
		return;
	}
	el<T> *temp = 0;
	i--;
	while (i--)
	{
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	delete temp;

}
template <typename T>
void list<T>::show(void)
{
	el<T> *cur_ptr = head;
	int i = 1;
	while (cur_ptr)
	{
		cout << "Ratio number " << i << " with value: " << cur_ptr->cur->get_ratio() << ';' << endl;
		cur_ptr = cur_ptr->next;
		i++;
	}
}