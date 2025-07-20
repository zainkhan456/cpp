#include<iostream>
using namespace std;
unsigned int factorial();
int main()
{
	cout<<"you are inside the main function\n\n";
	unsigned int fact;
	fact = factorial();
	cout<<"the program control is back in the main functinon\n\n";
	cout<<"the factorial of the number is =  "<<fact;
}
unsigned int factorial()
{
	cout<<"you are inside the factorial function \n\n";
	int number;
	unsigned int f = 1;
	cout<<"enter the number to calculate it's factorial: ";
	cin>>number;
	for(int a = 1;a <= number;a++)
	f = f * a;
	return f;
}
