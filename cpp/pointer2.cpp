#include <iostream>
using namespace std;

class Test
{
	int x, y;
	
	public:
	
	Test(int x = 0, int y = 0)
	{
		this->x = x; // not valid for static members
		this->y = y;
	}
	
	Test &setX(int a)
	{
		x = a;
		return *this;
	}
	
	Test &setY(int a)
	{
		y = a;
		return *this;
	}
	
	void show()
	{
		cout << x << endl << y << endl;
	}
};

int main()
{
	Test obj(5, 5);
	obj.show();
	obj.setX(100).setY(200);
	obj.show();
	return 0;
}
