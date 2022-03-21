#pragma once

template <typename T>
struct el
{
	T* cur;
	el<T> *next;
};
template <typename T>
class list
{
private:
	el<T> *head;
public:
	list();
	T* getptr(int i);
	void add(void);
	void del(int i);
	void show(void);
	/*void load_to_file(void);
	void load_from_file(void);*/
};
