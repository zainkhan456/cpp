#include<iostream>
using namespace std;
void calculatepower(int,int);
int main()
{
	int base,power;
	cout<<"enter the base to calculate it's power: ";
	cin>>base;
	cout<<"enter the power: ";
	cin>>power;
	calculatepower(base,power);
	return 0;
		
}
void calculatepower(int b, int p)
{
	int product = 1;
	for(int a = 1;a <= p;a++)
	product = product * b;
	cout<<b<<" to the power "<<p<<" is = "<<product<<endl;
}
