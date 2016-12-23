#include<iostream>
#include<string>
using namespace std;
#ifndef _MYCLASS_
#define _MYCLASS_

template<typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1, T2);
	~MyClass();

	void display();
	T2 getage();

private:
	T1 name;
	T2 age;

};
#define fuck
#include "myclass.cpp"
#endif // !_MYCLASS_
