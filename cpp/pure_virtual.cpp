#include <iostream>
using namespace std;

class Shape
{
	protected:
	double l, b;
	
	public:
	void getData(double a1, double a2)
	{
		l = a1;
		b = a2;
	}
	
	virtual void area() = 0;  
};

class Triangle : public Shape
{
	public:
	void area()
	{
		cout << "Area of triangle : " << l*b/2 << endl;
	}
};

class Rectangle : public Shape
{
	public:
	void area()
	{
		cout << "Area of rectangle : " << l*b << endl;
	}
};

int main()
{
	Triangle tri;
	Rectangle rect;
	
	Shape *r = &rect, *t = &tri;
	
	r->getData(10, 20);
	t->getData(20, 5);
	
	r->area();
	t->area();
	
	return 0;
}
