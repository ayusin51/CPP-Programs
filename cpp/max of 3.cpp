#include <iostream>
using namespace std;

	int main()
	{
		int a,b,c,max;
		cin >> a >> b >> c ;
		/*
		max = a>b ? a>c ? a:c : b>c ? b : c ;
		*/
		if(a > b && a > c) max = a;
		else if(b > c && b > a) max = b;
		else if (c > a && c > b) max = c;
		cout << "Max is : " << max;
		return 0;
	}
