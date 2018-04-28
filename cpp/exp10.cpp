#include <iostream>
using namespace std;

class figure
{
	public:
	float l, b;
	figure(float a, float a1) : l(a), b(a1)
	{}
	virtual void area() = 0;
	
};

class rect: public figure
{
	public:
	
	rect(float a, float a1) // : l(a), b(a1)
	{
		 l = a;
		 b = a1;
	}
	
	void area()
	{
		cout <<  l*b << endl;
	}
	
};

class tri: public figure
{
	public:
	
	tri(float a, float a1) // : l(a), b(a1)
	{
		 l = a;
		 b = a1;
	}
	
	void area()
	{
		cout << (l*b)/2 << endl;
	}
	
};

int main()
{
	rect a(5, 5);
	tri b(5, 5);
	figure c(1.2,2.2);
	figure *r = &a, *t = &b;
	r->area();
	t->area();
	return 0;
	
}
