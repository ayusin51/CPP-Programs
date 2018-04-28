// WAP which  takes student names , roll no , their marks in 5 subjects , and after calculating their percentage , print result in the form of grades A - D or FAIL
#include <iostream>
#include <string>
using namespace std;

	int main()
	{
		string name;
		int roll,key,n,i;
		float per,m1,m2,m3,m4,m5;
		
		cout << "Enter the number of students : ";
		cin >> n;
		
		for(i=1;i<=n;i++)
		{
			cout << "Student " << i << " : " << endl;
			cout << "Name : ";
			cin >> name ;
			cout << "Roll No. : ";
			cin >> roll ;
			cout << "Marks 1 : ";
			cin >> m1 ;
			cout << "Marks 2 : ";
			cin >> m2 ;
			cout << "Marks 3 : ";
			cin >> m3 ;
			cout << "Marks 4 : ";
			cin >> m4 ;
			cout << "Marks 5 : ";
			cin >> m5 ;
			
			per = (m1 + m2 + m3 + m4 + m5)/5;
			
			if(per > 80) key = 1;
			else if(per > 70) key = 2;
			else if (per > 60) key = 3;
			else if(per > 50) key = 4;
			else key = 5;
			
			cout << "Your grade is ";
			
			switch(key)
			{
				case 1 : 
					cout << "A :)" ;
				break;
				case 2 : 
					cout << "B :)";
				break;
				case 3 : 
					cout << "C :|";
				break;
				case 4 : 
					cout << "D :|";
				break;
				case 5 : 
					cout << "FAIL :(";
				break;
			}
			cout << endl;
		}
		return 0;
	}
