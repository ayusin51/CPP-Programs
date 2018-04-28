#include <iostream>
using namespace std;

class Employee 
{
	protected:
	float base_sal;
	
	public:	
	virtual void getSal() = 0;
};

class Salaried : public Employee
{
	public:
	
	Salaried()
	{
		float sal;
		cout << endl << "Base Salary : ";
		cin >> sal;
		base_sal = sal;
	}
	
	void getSal()
	{
		cout << "Final Sal : " << base_sal << endl;
	}
};


class Commision : public Employee
{
	public:
	
	Commision()
	{
		float sal;
		cout << endl << "Base Salary : ";
		cin >> sal;
		base_sal = sal;
	}
	
	void getSal()
	{
		int sales;
		cout << "Enter the weekly sales : ";
		cin >> sales;
		cout << "Final Sal : " << (base_sal + sales/10) << endl;
	}
};


class  Base_plus_commision: public Employee
{
	public:
	
	Base_plus_commision()
	{
		float sal;
		cout << endl << "Base Salary : ";
		cin >> sal;
		base_sal = sal;
	}
	
	void getSal()
	{
		cout << "Final Sal : " << (base_sal + base_sal/10) << endl;
	}
};

int main()
{
	cout << endl << "Salaried Employee : " << endl;
	Salaried s;
	Employee *e1 = &s;
	e1 -> getSal();
	
	cout << endl << "Commision Employee : " << endl;
	Commision c;
	Employee *e2 = &c;
	e2 -> getSal();
	
	cout << endl << "Salary_plus_commision Employee : " << endl;
	Base_plus_commision b;
	Employee *e3 = &b;
	e3 -> getSal();
	
	
	return 0;
}
