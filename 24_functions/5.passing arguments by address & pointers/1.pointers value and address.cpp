#include<iostream>
using namespace std;
int main()
{
	int number = 50;
	int *p; ////////////////// here * is called indirection operator
	p = &number;////////////// here & is called address of operator
	cout<<"the value stored in number variable is "<<number;
	cout<<"\nthe value stored in number variable is  "<<*p<<endl;
	cout<<"\nthe adress of this variable is "<<p;
	cout<<"\nthe adress of this variable is "<<&number<<endl<<endl;
	number = 70;
	cout<<"the value stored in number variable is "<<number;
	cout<<"\nthe value stored in numer variable is  "<<*p<<endl<<endl;
	*p = 9;
	cout<<"the value stored in number variable is "<<number<<endl;
	cout<<"the value stored in number vaiable is "<<*p<<endl;
	number = number * number;
	cout<<"\nthe value stored in number variable is "<<*p<<endl;
	number = *p + 19;
	cout<<"\nthe value stored in number variable is "<<number;
	
	return 0;
}
