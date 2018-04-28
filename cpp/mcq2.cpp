#include<iostream>
using namespace std;

/* 

class A
{public:
 void show(){
  cout<<" In class A ";
 }
};
 
class B: public A
{
 public:
 int x;
 void show(){
  cout<<"In class B ";
 }
 B()
 {
  x = 10;
 }
};
 
int main(void)
{
 A *bp,b;
 B d;
 bp = &d;
 bp->show();
 cout << bp->x;
 return 0;
}




=======================================================================================


Which of the following statements about virtual functions is/are True?



 i) The virtual function must be member of some class

ii) virtual functions cannot be static members

iii) A virtual function can not be a friend of another class.()

(*)i and ii only
ii and iii only
i and iii only
All i, ii and iii

======================================================================================


class A
{protected:
 int x,y;
 public:
 void setdata(int a,int b){
  x=a; y=b;
 }
};

class B
{public:
 void display(int i);
};

void B::display(int i)
{
 cout<<i<<endl;
}

class C: public A, public B
{
 public:
 int add(){
  return(x+y+10);
 }
};

int main(){
 C obj1;
 C obj2;
 obj1.setdata(10,20);
 obj2.setdata(10,20);
 obj1.display(obj1.add());
 obj2.display(obj2.add());
 return 0;
}

==========================================================================================


class A
{protected:
 int x,y;
 public:
 void setdata(int a,int b){
  x=a; y=b;
 }
};

class B
{public:
 void display(int i);
};

void B::display(int i)
{
 cout<<i<<endl;
}

class C: public A, public B
{
 public:
 int add(){
  return(x+y+10);
 }
};

int main(){
 C obj1;
 C obj2;
 obj1.setdata(10,20);
 obj2.setdata(10,20);
 obj1.display(obj1.add());
 obj2.display(obj2.add());
 return 0;
}
===================================================================================================

A function declared in a base class that has no definition relative to the base class is

member function
virtual function
pure virtual function
pure function

==================================================================================================


#include<iostream>
using namespace std;
class B1
{public:
 void show(){
  cout<<"\n In base class 1";
 }
};

class B2
{public:
 void show(){
  cout<<"\n In base class 2";
 }
};

class D:public B1,public B2
{
 public:
 D()
 {
  cout<<"\n In derived class constructor ";
 }
};

int main()
{
 D d;
 d.show();
 return 0;
}
=============================================================================================

Run time polymorphism is achieved only when a ……………….. is accessed through a pointer to the base class.

member function
virtual function
static function
friend function

==============================================================================================


#include<iostream>
using namespace std;
class B1
{public:
 B1()
 {
  cout<<"\n In class class B1 constructor";
 }
 ~B1()
 {
  cout<<"\n In B1 destructor";   
 }
};

class D:public B1
{
 public:
 D()
 {
  cout<<"\n In derived class D's constructor";
 }
 ~D()
 {
  cout<<"\n In derived class D's Destructor";
 }
};

int main()
{
 B1 *p=new D();
 delete p;
 return 0;
}
/*
==========================================================================================

#include<iostream>
using namespace std;
class B1
{public:
 B1()
 {
  cout<<"\n In class class B1 constructor";
 }
 virtual ~B1()
 {
 cout<<"\n In B1 destructor";   
 }
};

class D:public B1
{
 public:
 D()
 {
  cout<<"\n In derived class D's constructor";
 }
 ~D()
 {
  cout<<"\n In derived class D's Destructor";
 }
};

int main()
{
 B1 *p=new D();
 delete p;
 return 0;
}
/*
=======================================================================================



C++ supports run time polymorphism with the help of virtual functions, which is called …………….. binding.

dynamic binding/late binding
early binding/static binding
compile time binding
none

=======================================================================================

A …………………. refers to an object that that currently invokes a member function

void pointer
null pointer
this pointer
base pointer

======================================================================================

#include<iostream>
using namespace std;
class Base
{
public:
void show()
 {

 cout<<" In Base \n";
}
};

class Derived: public Base
{
public:
void show()
{

cout<<"In Derived \n";
}
};

int main()
{
 Base *bp,b ;
 Derived d;
 bp=&b;
 bp->show();
 bp=&d;
 bp->show();
 return 0;
}

===========================================================================================



using namespace std;
class B
{public:
 virtual void show() = 0;
};
 
int main(void)
{
 B b;
 B *bp;
 return 0;
}


==========================================================================================

using namespace std;
class test
{int a;
 public:
 virtual test(){
  a=0;
 }
 void display(){
  cout<<"a="<<a;
 }
};

int main()
{﻿
 test t;
 t.display();
 return 0;
}

===========================================================================================

#include<iostream>
using namespace std;
class test
{int a;
  public:
  test()
  {
   a=20;
  }
  void display(){
   cout<<"a="<<a;
  }
  virtual ~test()
  {
   cout<<"object t destroyed";
  }
};
  
int main()
{
  test t;
  t.display();
  return 0;
}

==========================================================================================

Choose the correct statement

An abstract base class can have pure virtual destructor
An abstract base class can have virtual destructor
An abstract base class can have non virtual destructor
An abstract base class cannot have destructor 

========================================================================================

An abstract class is useful when

no classes should be derived from it
there are multiple paths from one derived class to another
no objects can be instantiated from it
none of these 
*/
==================================================================================
Question 1:
==================================================================================

class emp
{
	protected:
	char name[20];
	int age;
	int sal;
	
	public;
	void read()
	{
		std::cin.getline(name, 100);
		cin >> age;
		cin >> sal;
	}
	
	virtual void clerk() = 0;
};

class dep: public emp
{
	int q;
    public:
    void input()
    {
    	cin >> q;
    }
    void clerk()
    {
    	cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << sal << endl;
        if (q == 1)
        {
        	cout << "Dept: CSE";
        }else if (q == 2)
        {
			cout << "Dept: ECE";
		}else if(q == 3)
        {
        	cout << "Dept: " << "ME";
        }else if(q==0)
        {
        	cout << "Dept: " << "Quit";
        }
    }
};
int main()
{
    // Write your code here
	emp *p;
  dep a;
  p = &a;
  p->read();
  a.input();
  p->clerk();
    return 0;
}


=====================================================================================
Qustion 2:
=====================================================================================
class figure
{
	public:
	virtual clerk() =0;
};

// Write your code here to complete the solution.

class rectangle: public figure
{
  float l, b;
  public:
  void area()
  {
  	cin >> l >> b;
    cout << "area of rectangle is " << l*b << endl;
  }
};

class triangle: public figure
{
	float l, b;
    public:
    void area()
    {
    	cin >> l >> b;
        cout << "area of triangle is " << l*b/2 << endl;
    }
};

int main()
{
	int choice;
	rectangle r;
	triangle t;
	cin >> choice;
	switch(choice)
	{
		case 1:
		r.area();
		break;
		
		case 2:
		t.area();
		break;
		
		default:
		cout << "wrong choice";
	}
	return 0;
}
===========================================================================================
