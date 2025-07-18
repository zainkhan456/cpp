#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter a number to calculate it's factorial : ";
	cin>>number;
	unsigned long long int product = 1;
	int a = number;
	while(a >= 1)
	{
		product = product * a;
		a--;
	}
	cout<<"the factorial of "<<number<<" is = "<<product;
	return 0;
}
