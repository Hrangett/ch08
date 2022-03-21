#include <iostream>
using namespace std;
class First
{
public:
	void FirstFunc()
	{
		cout << "FirstFunc()" << endl;
	}

	virtual void SimpleFunc() {
		cout << "First's SImpleFUnc()" << endl;
	}
};
class Second : public First
{
public:
	void SecondFunc() { cout << "SecondFunc()" << endl; }
	void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }

};
class Third :public Second
{
public: 
	void ThirdFunc()
	{
		cout << "ThirdFunc()" << endl;
	}
	void SimpleFunc() { cout << "ThirdFunc's SimpleFunc()" << endl; }
};

int main() {
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();
	cout << endl;
	Second& sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();
	cout << endl;
	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();

}