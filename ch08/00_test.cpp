#include <iostream>
using namespace std;

class One
{
public:
	void one()
	{
		cout << "One::one()" << endl;
	}

};

class Two : public One
{
public:
	void two()
	{
		cout << "Two::two()" << endl;
	}

};

class Three : public Two
{
public:
	void three()
	{
		cout << "Three::three()" << endl;
	}

};

int main()
{
	One* pone = new One;	//One형 객체 포인터 pone생성(부모)
	pone->one();

	One* ptwo = new Two;
	ptwo->one();

	One* pthree = new Three;
	pthree->one();

	
	//부모타입으로 객체를 선언 후 자식객체로 가리키게 하면 부모class의 맴버만 접근 할 수 있다

	
}