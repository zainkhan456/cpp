#include<iostream>
using namespace std;
unsigned int factorial(int);
int main()
{
	cout<<"you program control is inside the main function \n\n";
	int number;
	unsigned int fact;
	cout<<"enter the number to calculate it's factorial: ";
	cin>>number;
	fact = factorial(number);
	cout<<"your program is back inside the main function ";
	cout<<"the factorial of the number is = "<<fact;
	return 0;
}
unsigned int factorial(int n)
{
	cout<<"the program control is in the factorial function \n\n";
	unsigned int f = 1;
	for(int a = 1 ; a <= n;a++)
	f = f * a;
	return f;
}
