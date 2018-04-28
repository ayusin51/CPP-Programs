#include <iostream>
using namespace std;

class Electricity
{
	protected:
	int units;
	
	public:
	
	Electricity(int u)
	{
		units = u;
	}
	
	virtual void Bill() = 0;
};

class More_Electricity : public Electricity
{
	public:
	More_Electricity(int u) : Electricity(u)
	{}
	
	void Bill()
	{
		float cost, sur = 0;
		if (units < 100)
		{
			cost = 0.5;
			cout << "cost up to 100 unit is Rs " << units*cost << endl;
		}else
		{
			cost = 0.6;
			cout << "Beyond 300 unit is Rs " << units*cost << endl;
		}
		if(units*cost>250)
		{
			sur = (0.15)*(units*cost - 250);
		}
		
		
		cout << "Bill amount is Rs " << units*cost + sur << endl;
	}
};

int main()
{
	int units;
	cout << "Enter the no. of units: ";
	cin >> units;
	More_Electricity B(units);
	B.Bill();
	return 0;
}
