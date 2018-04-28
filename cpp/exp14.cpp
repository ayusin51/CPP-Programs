#include <iostream>
using namespace std;

class Dept
{
	protected:
	int num;
	
	public:
	void clerk()
	{
		cout << "Number of Employees : " << num << endl;
	}
};

class CSE : public Dept
{
	public:
	CSE(int n)
	{
		num = n;
	}
};

class ECE : public Dept
{
	public:
	ECE(int n)
	{
		num = n;
	}
};

int main()
{
	Dept *head;
	CSE cse(20);
	ECE ece(5);
	head = &cse;
	head->clerk();
	head = &ece;
	head->clerk();
	return 0;
}
