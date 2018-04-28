#include <iostream>
using namespace std;
	
	int main()
	{
		int n,i,j;
		cin >> n;
		for( i=1;i<=2*n;i++ )
		{
			if(i<=n)
			for(j=1;j<=i;j++)
			{
				cout << j;
			}
			else
			for(j=1;j<=2*n-i;j++)
			{
				cout << j;
			}
			cout << endl;
		}
		return 0;
	}
