#include <iostream>
#include <vector>
using namespace std;

int  main()
{
	vector <int>v(3);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	int i, n = v.capacity();
	for(i=0; i<n; i++)
	{
	    cout << v[i] << endl;
	}
	v.clear();
	//v.erase();
	cout << endl <<  "Is vector empty : " << v.empty() << endl;
	cout << "cap : " << v.capacity() << endl << "Size : " << v.size() << endl << "Front : " << *(v.begin()) << endl << "Back : " << v.back();
	cout << endl << "After clear :" << endl;
	cout << endl <<  "Is vector empty : " << v.empty() << endl;
	
	for(i=0; i<n; i++)
	{
	    cout << v[i] << endl;
	}
	vector <int> :: iterator it = v.begin();
	//cout << "Before insertion :" << endl;
	v.insert(it, 20);
	cout << endl << "After Insertion : " << endl;
	n = v.capacity();
	for(i=0; i<n; i++)
	{
	    cout << v[i] << endl;
	}
	
}
