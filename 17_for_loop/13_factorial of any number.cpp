#include<iostream>
using namespace std;
int main()
{
	unsigned long long int product = 1;
	int number;
	cout<<"enter the number to calculate it's factorial : ";
	cin>>number;
	for(int a = number; a > 1; a--)
		product = product * a ;
	cout<<"the factorial of "<<number<<" is = "<<product;
	return 0;
}
