#include<iostream>
using namespace std;
void power();
int main()
{
	cout<<"the program control in the main function\n\n\n";
	power();
	cout<<"the program control in back in the main function ";
	return 0;
	
}
void power()
{
	cout<<"the porgram control is now in the power() function\n\n\n";
	int base,power,result = 1;
	cout<<"enter the base of the number to calculate it's power: ";
	cin>>base;
	cout<<"enter the power of the number: ";
	cin>>power;
	for(int a = 1;a <= power;a++)
		result = result * base;
		cout<<base<<" raised to the power "<<power<<" is = "<<result;
	cout<<"\nthe poower function has concluded: the program control will now get back into the main function\n\n\b";
	
}
