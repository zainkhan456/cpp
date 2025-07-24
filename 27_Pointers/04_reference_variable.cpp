#include<iostream>
using namespace std;
int main()
{
int a;
int &aref = a;
a = 10;
cout<<"the value of variable a is = "<<a;
cout<<"\nthe value of variable a accessed through reference variable is = "<<aref;
aref = 20;
cout<<"\nthe value of variale a is = "<<a;
cout<<"\nthe value of variable a accessed through reference variable is ="<<aref;
return 0;	
}
