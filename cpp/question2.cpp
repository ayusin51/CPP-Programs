#include <iostream>
using namespace std;

class Person
{
	protected:
	char name[20];
	int age;
	
	public:
	
	void getData()
	{
		cin >> name;
		cin >> age;
	}
	
	void showData()
	{
		cout << name << endl << age << endl;
	}
};

class Batsman : public Person
{
	int odi;
	int half_century;
	float avg;
	float strike_rate;
	
	public:
	
	void get()
	{
		getData();
		cin >> odi;
		cin >> half_century;
		cin >> avg;
		cin >> strike_rate;
	}
	
	
	void show()
	{
		showData();
		cout << odi << endl;
		cout << half_century << endl;
		cout << avg << endl;
		cout << strike_rate << endl;
	}
};

int main()
{
	Batsman b1;
	b1.get();
	cout << "OUTPUT :" << endl;
	b1.show();
	return 0;
}
