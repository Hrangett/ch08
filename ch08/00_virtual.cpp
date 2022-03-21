#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1() { // �����Լ��� �����Ѵ� :: ��ӵ��Լ��� �������̵����� ���� �Ǿ��� ��, �ڽİ�ü�� �Լ��� ������ �� ���. ��Ÿ�� �� �̸� ȣ��Ǵ� �Լ��� ��ġ�� ������ �����ϰ� �Ѵ�.
		cout << "Base :: func1() " << endl;
	}
	virtual void func2() {
		cout << "Base :: func2() " << endl;
	}
	void func3() {
		cout << "Base :: func3() " << endl;
	}
};

class Derived :public Base
{
public:
	virtual void func1() {//�������̵� �Ǵ� �Լ��� �ڵ����� virtual �ٴ´�, �׷��� �ٿ��൵�ǰ� ���ص���
		//�������̵�
		cout << "Derived :: func1()" << endl;
	}
	//void func2() {
	//	//�������̵�
	//	cout << "Derived :: func2()" << endl;
	//}
	void func3(){
		//�������̵�
		cout << "Derived :: func3()" << endl;
	}
	void func4()
	{
		cout << "Derived :: func4()" << endl;
	}

};

int main()
{
	Base b;
	Derived d;
	Base* pb = new Derived(); //�θ�Ŭ���� ���� �����ͷ�, �ڽ� ��ü�� ����Ű�� ����. �ڽ�Ŭ���� ���� ���ǵ� �ɹ��� ��ȯ ����
	pb->func1();
	pb->func2();
	pb->func3();

	return 0;

}