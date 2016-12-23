//#include"myclass.h"

#ifdef fuck
	template<typename T1, typename T2>
	MyClass<T1, T2>::MyClass(T1 n, T2 a)
		:name(n), age(a)
	{
	}

	template<typename T1, typename T2>
	MyClass<T1, T2>::~MyClass()
	{
	}

	template<typename T1, typename T2>
	void MyClass<T1, T2>::display()
	{
		cout << "name :" << name << " age :" << age;
	}

	template<typename T1, typename T2>
	T2 MyClass<T1, T2>::getage()
	{
		return this->age;
	}
#endif // fuck


