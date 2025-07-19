#include<iostream>
using namespace std;
int main()
{
	int number;
	unsigned long long int product = 1;
	cout<<"enter the number to calculate it's factorial: ";
	cin>>number;
	int a = number;
	do
	{
		product = product * a;
		a--;
	}while(a > 0);
	cout<<"the factorial of "<<number<<" is = "<<product;
	return 0;
}
