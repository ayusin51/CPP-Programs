#include <iostream>
using namespace std;

class A
{
	int a, b, c;
	
	public:
	void get(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	
	void show()
	{
		cout << a << endl << b << endl << c << endl;
	}
	
};

int main()
{
	A obj;
	obj.get(10, 20, 30);
	obj.show();
	return 0;
}
