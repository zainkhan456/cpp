//pointers
#include<iostream>
using namespace std;
int main()
{
	int a = 50;
	int*p=&a;//& is called adress of
	cout<<"the value of variable a is = "<<a<<endl;
	cout<<"the value of variable a accessed through pointer is = "<<*p;//* is called dereference operator
	cout<<"\nthe memory adress of variable a is "<<&a;
	cout<<"\nthe address of variable a accessed through pointer is = "<<p;
	return 0;
	//any number start from 0x will be a hexadecimal numaber
}
