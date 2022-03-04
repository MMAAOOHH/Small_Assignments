#include <iostream>
using namespace std;

class A
{
	public:
		A() {
			cout << "Constructor A called" << endl;
		}
};

class B : public A
{
	public:
		B() {
			cout << "Constructor B called" << endl;
		}
};

class C : public B
{
	public:
		C() {
			cout << "Constructor C called" << endl;
		}
};

int main() {

	A a;
	B b;
	C c;

	return 0;
}
