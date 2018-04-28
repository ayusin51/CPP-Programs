#include <iostream>
using namespace std;

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

};

int main()
{
	int x=5;
	pr p1;
	p1 = x;
	p1.disp();
}

