#include<iostream>
using namespace std;
int main()
{
	long long int product = 1;
	int base,power;
	cout<<"enter the base to calculate it's power: ";
	cin>>base;
	cout<<"entr the value of power: ";
	cin>>power;
	int a = 1;
	do
	{
		product = product * base ;
		a++;
	}while(a <= power);
	cout<<base<<" to the power "<<power<<" is = "<<product;
	return 0;
}
