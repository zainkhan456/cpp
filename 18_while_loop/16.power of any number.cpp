#include<iostream>
using namespace std;
int main()
{
	int base,power;
	unsigned long long int product = 1;
	cout<<"enter the base to calculate it's power: "<<endl;
	cin>>base;
	cout<<"enter the power of the base: "<<endl;
	cin>>power;
	int a = 1;
	while(a <= power)
	{
		product = product * base;
		a++;
	}
	cout<<base<<" to the power "<<power<<" is equal to "<<product;
	return 0;
}
