#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	
	vector <int>::iterator i1;
	remove(v.begin(), v.end(), 3);
	
	for(i1 = v.begin(); i1 !=v.end(); i1++)
	{
		cout << *i1 << endl;
	}	
}
