#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout.precision(4);
	cout << 33.14 << endl;
	cout << 3.1456 << endl;
	cout << 3.1451 << endl;
	cout << 3.10000 << endl;
	
	float a = 3.123456;
	cout << setprecision(3) << a << endl;
	
	return 0;
}
