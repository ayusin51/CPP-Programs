#include <iostream>
using namespace std;

class A
{
	int a, b;
	
	public:
	A(int a1, int a2)
	{
		a = a1;
		b = a2;
	}
	
	void add()
	{
		cout << a << " + " << b << " = " << a+b << endl;
	}
	
	void add(int a1, int a2)
	{
		cout << a1 << " + " << a2 << " = " << a1+a2 << endl;
	}
};

class B
{
	protected:
	int a, b;
	
	public:
	
	B(){}
	
	B(int a1, int b1)
	{
		a = a1;
		b = b1;
	}
	
	virtual void sum(int a1, int a2)
	{
		cout << a << " + " << b << " = " << a+b << endl;
	}
	
};

class C : public B
{
	public:
	void sum(int a1, int a2)
	{
		cout << a1 << " + " << a2 << " = " << a1+a2 << endl;
	}
};

int main()
{
	cout << "Using Function Overloading :" << endl;
	A a(1, 2);
	a.add();
	a.add(5, 6);
	
	cout << endl << "Using Function Overriding :" << endl;
	B *b, b1(1, 2);
	C c;
	b = &c;
	b1.sum(5, 6);
	b->sum(5, 6);
	return 0;
}
