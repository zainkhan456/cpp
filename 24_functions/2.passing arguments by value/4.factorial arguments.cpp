
#include<iostream>
using namespace std;
void factorial(int);
int main()
{
	int number;
	cout<<"enter a number to calculate it's factorial: ";
	cin>>number;
	factorial(number);
	return 0;
}
void factorial(int num)
{
	int fact = 1;
	for(int a = 1;a <=num;a++)
	fact = fact * a;
	cout<<"the factorial of "<<num<<" is equal to "<<fact;
}
