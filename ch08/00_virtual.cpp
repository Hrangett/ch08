#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1() { // 가상함수로 정의한다 :: 상속된함수에 오버라이딩으로 정의 되었을 때, 자식객체의 함수로 접근할 떄 사용. 런타임 시 미리 호출되는 함수의 위치를 정해줘 실행하게 한다.
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
	virtual void func1() {//오버라이딩 되는 함수에 자동으로 virtual 붙는다, 그래서 붙여줘도되고 안해도됨
		//오버라이딩
		cout << "Derived :: func1()" << endl;
	}
	//void func2() {
	//	//오버라이딩
	//	cout << "Derived :: func2()" << endl;
	//}
	void func3(){
		//오버라이딩
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
	Base* pb = new Derived(); //부모클래스 형인 포인터로, 자식 객체를 가리키고 있음. 자식클래스 내에 정의된 맴버들 소환 가능
	pb->func1();
	pb->func2();
	pb->func3();

	return 0;

}