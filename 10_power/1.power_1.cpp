#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base,power;
	cout<<"enter the value of base: "<<endl;
	cin>>base;
	cout<<"enter the value of power: "<<endl;
	cin>>power;
	cout<<base<<" raised to the power "<<power<<" is equal to "<<pow(base,power);
	return 0;
}
