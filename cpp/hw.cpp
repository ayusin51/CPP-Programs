/*
	Student in a school is involved in various activities. So while calculating the result the teacher wants to add on the marks of activities 
	with the marks on subjects. Write a program to find the total marks of the student according to teacher.
*/

#include <iostream>
using namespace std;

class Student
{
	protected:
	char name[20];
	int age;
}; 

class Activity : public Student
{
	protected:
	int marks;
};

class Subject : public Student
{
	protected:
	int marks;
};

class Result : public Subject, Activity
{
	int total;
};
