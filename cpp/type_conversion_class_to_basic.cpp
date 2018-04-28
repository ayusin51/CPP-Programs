#include <iostream>
using namespace std;

class pr2;

class pr{
	int a, b;
	public:
		
		pr(){}
		
		pr(int x, int y)
		{
			a= x;
			b = y;
		}
		
		pr(int x)
		{
			a=x;
			b=0;
		}
		
		void disp()
		{
			cout << endl << a << endl << b << endl;
		}
		
		friend class pr2;

};

class pr2{
	int a, b;
	public:
		
		pr2(){}
		
		pr2(int x, int y)
		{
			a= x;
			b = y;
		}
		
		pr2(pr x)
		{
			a=x.a;
			b=x.b;
		}
		
		void disp()
		{
			cout << endl << a << endl << b << endl;
		}

};

int main()
{
	int x=5;
	pr p1;
	pr2 p2(100,200);
	p1 = p2;
	p1.disp();
}

