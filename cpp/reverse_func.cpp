#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <int> v;
	int i;
	for(i=1; i<10; i++)
	{
	    v.push_back(i);
	}
	reverse(v.begin(), v.end());
	vector <int>::iterator i1;
	for(i1 = v.begin(); i1 !=v.end(); i1++)
	{
		cout << *i1 << endl;
	}	
}
