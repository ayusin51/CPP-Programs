#include <iostream>
using namespace std;

class A // Base Class
{
	public:
	virtual void showa()
	{
		cout << "Class A" << endl;
	}
};

class B : virtual public A // Derived from A
{
	public:
	void showb()
	{
		cout << "Class B" << endl;
	}
};

class C : public A // Derived from A
{
	public:
	void showb()
	{
		cout << "Class C" << endl;
	}
};

class D : public B, C // Derived from B and C
{
	public:
	void showb()
	{
		cout << "Class D" << endl;
	}
};

int main()
{
	D d;
	d.showa();
	return 0;
}
