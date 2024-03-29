#include<iostream>
using namespace std;

class Base {
	int num1;
public:
	Base(int an)
	{
		num1 = an;
		cout << num1 << " : Bace 持失切" << endl;
	}
	virtual ~Base()
	{
		cout << num1 << " - Base 社瑚切" << endl;
	}
	void func()
	{
		cout << "Bace :: func()" << endl;
	}
};

class Derived : public Base
{
	int num2;
public:
	Derived(int an1, int an2) :Base(an1)
	{
		num2 = an2;
		cout << num2 << ": Derived 持失切" << endl;
	}
	~Derived()
	{
		cout << num2 << "- Derived 社瑚切" << endl;
	}
	void func()
	{
		cout << "Derived::func()" << endl;
	}
};

int main()
{
	Base b(1);  //梓端持失
	b.func();
	cout << endl;
	Derived d(2,22);
	d.func();
	cout << endl;
	Base* pb = new Derived(3,33);
	pb->func();
	cout << endl;

	delete pb;

	return 0;
}