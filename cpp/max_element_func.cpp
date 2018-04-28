#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int elt[] = {'3', '7', '2', '5', '8'};
	cout << (char*)(max_element(elt, elt+5)) << endl;
}
