#include <iostream>
using namespace std;

class Square
{
	int num;
	
	public:
	Square(int a)
	{
		num = a;
	}
	
	void calc()
	{
		cout << "Square of " << num << " : " << num*num << endl;
	}
};

class Cube
{
	int num;
	
	public:
	Cube(int a)
	{
		num = a;
	}
	
	void calc()
	{
		cout << "Cube of " << num << " : " << num*num*num << endl;
	}
};


int main()
{
	Square s(20);
	Cube c(2);
	s.calc();
	c.calc();
	return 0;
}
