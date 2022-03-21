#include <iostream>

using namespace std;

class First {
public:
	void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};

class Second :public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third :public Second
{
public:
	void MyFunc() {
		cout << "Third Func" << endl;
	}
};


int main()
{
	Third* thp = new Third();
	Second* sp = thp;
	First* fp = sp;

	fp->MyFunc();
	sp->MyFunc();
	thp->MyFunc();

	delete thp;

	return 0;
}