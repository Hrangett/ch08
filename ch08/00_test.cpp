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
	One* pone = new One;	//One�� ��ü ������ pone����(�θ�)
	pone->one();

	One* ptwo = new Two;
	ptwo->one();

	One* pthree = new Three;
	pthree->one();

	
	//�θ�Ÿ������ ��ü�� ���� �� �ڽİ�ü�� ����Ű�� �ϸ� �θ�class�� �ɹ��� ���� �� �� �ִ�

	
}