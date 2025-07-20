#include<iostream>
using namespace std;
void calculatepower(int&,int&,int&);
int main()
{
	int base,power,result = 1;
	cout<<"enter the base of the number to calculate it's power: ";
	cin>>base;
	cout<<"enter the power: ";
	cin>>power;
	calculatepower(base,power,result);
	cout<<base<<" raised to the power "<<power<<" is equal to "<<result;
	return 0;
}
void calculatepower(int& b,int& p,int& r)
{
	for(int a = 1;a <= p;a++)
	r = r * b;	
}
