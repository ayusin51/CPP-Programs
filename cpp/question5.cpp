#include <iostream>
#include <string.h>
using namespace std;

class Student
{
	protected:
	int roll;
	char name[20];
	
	public:
	Student(int rollno, char* sname)
	{
		roll = rollno;
		strcpy(name, sname);
	}
	
};

class Marks: public Student
{
	protected:
	int maths, eng, oop;
	
	public:
	Marks(int rollno, char* sname, int math, int engl, int oops): Student (rollno, sname)
	{
		maths = math;
		eng = engl;
		oop = oops;
	}
};

class Result: public Marks
{
	public:
	
	Result(int rollno, char* sname, int math, int engl, int oops):Marks(rollno, sname, math, engl, oops)
	{}
	
	void show()
	{
		cout << "<----------Result---------->" << endl;
		cout << "Roll : " << roll << endl;
		cout << "Name : " << name << endl;
		cout << "Total Marks : " << maths+eng+oop << endl;
	}
	
};

int main()
{
	int roll, math, eng, cpp;
	char name[20];
	cin >> roll >> name >> math >> eng >> cpp;
	Result r(roll, name, math, eng, cpp);
	r.show();
	return 0;
}
