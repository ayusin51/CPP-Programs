#include <iostream>
using namespace  std;

	void swap(int *, int *);

	int main()
	{

		int a, b;
		cin >> a >> b;
		cout << endl <<  "Before Swapping :" << endl;
		cout << "Value of a : " << a << endl;
		cout << "Value of b : " << b << endl;
		
		swap(&a, &b);
		
		cout << endl << "After Swapping :" << endl;
		cout << "Value of a : " << a << endl;
		cout << "Value of b : " << b << endl;
		
		return 0;
		
	}

	void swap(int *x , int *y) // Call by Address
	{
	
		int temp = *x;
		*x = *y;
		*y = temp;
		
		cout << endl <<  "Swapped Values :" << endl;
		cout << "Value of a : " << *x << endl;
		cout << "Value of b : " << *y << endl;
	
	}

