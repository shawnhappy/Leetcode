#include<iostream>
#include<ctime>
#include"solution.h"
#include"myclass.h"
#include"function.h"
#include"myQueue.h"
using namespace std;

//#define arraysize 10000
//#define random(x)(rand()/(double)x)
//double dnum[arraysize];
//template<typename T>
//void insertionsort(T num[], int length)
//{
//	for (int i = 1; i<length; ++i)
//	{
//		int j = i;
//		T val = num[i];
//		for (; j>0; --j)
//		{
//			if (val > num[j - 1])
//				break;
//			else
//				num[j] = num[j - 1];
//		}
//
//		num[j] = val;
//	}
//}


struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v) :val(v), next(NULL) {}
};


template<typename T, int N >int function1(T(&)[N]);

class A
{
public:
	A();
	virtual ~A();
	virtual int fun() { cout << "A fun()" << endl; return 0; }
	int fun(string) { cout << "A fun(double)" << endl; return 0; }
};


A::A()
{
	cout << "A construct\n";

}

A::~A()
{
	cout << "A destroy\n";
}

class B : public A {
public:
	B();
	~B();
	int fun(int) { cout << "B fun(int)" << endl; return 10; }
private:
	int param;
};

B::B()
{
	cout << "B construct" << endl;
}

B::~B() {
	cout << "B destroy" << endl;
}

template<typename T>
void getsum(T a, T b)
{
	cout << "template function\n";
}

template<>
void getsum(int const a, int const b)
{
	cout << "special version\n";
}

void getsum(int a, int b)
{
	cout << "normal function\n";
}

void testthrow()
{
	try
	{
		throw runtime_error("runtime");
	}
	catch (overflow_error ebj)
	{
		cout << "overflow_error in testthrow" << endl;
	}
	catch (runtime_error rbj)
	{
		cout << "runtime_error in testthrow" << endl;
		throw;
	}
	catch (const std::exception&)
	{
		cout << "exception in testthrow" << endl;
	}
}

#include <fstream>
#include<stdio.h>
#include<set>

bool isprime(int n)
{
	for (int i = 2; i*i <= n; ++i)
		if (n%i == 0)
			return false;
	return true;
}

void helper(vector<int> origin, vector<int> circle)
{
	if (origin.empty() && isprime(circle[circle.size()-1]+circle[0]))
	{
		for (int i = 0; i < circle.size() - 1; ++i)
			cout << circle[i] << " ";
		cout << circle[circle.size() - 1] << endl;
		return;
	}

	
	for(vector<int>::iterator itr=origin.begin(); itr != origin.end(); ++itr)
		if (isprime(*itr + circle[circle.size() - 1]))
		{
			int tem = *itr;
			itr = origin.erase(itr);
			circle.push_back(tem);
			helper(origin, circle);
			circle.pop_back();
			itr = origin.insert(itr,tem);
		}	
}
int main()
{
	unsigned int n = 0;
	int cnt = 0;
	while (cin >> n)
	{
		cout << "Case " << ++cnt << ":" << endl;

		vector<int> origin;
		vector<int> result(1,1);
		for (int i = 2; i <= n; ++i)
			origin.push_back(i);
		helper(origin, result);

		++cnt;
		cout << endl;
	}
	
}


template<typename T, int N>
int function1(T (&param)[N])
{
	for (int i = 0; i < N; ++i)
		cout << i << " ";

	return N;
}
