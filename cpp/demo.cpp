#include<iostream>
using namespace std;
class A
{public:
 A(int a)
  {
   cout<<" "<<a;
    }};
class B: public A
{ public: B(int a,int b):A(a)
 { 
 cout<<" "<<b;
  }};
class C: public B{ 
public: C(int a,int b,int c):B(a,b)
 { 
 cout<<" "<<c; 
 }};
int main(){
 C c(10,20,30); 
return 0;}
