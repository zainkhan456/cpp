#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int base,power,product;
	char choice = 'y';
	while(choice == 'y' || choice == 'Y')
	{
		system("cls");
		cout<<"enter the value of base: ";
		cin>>base;
		cout<<"enter the value of power: ";
		cin>>power;
			product = 1;
		for(int a = 1; a <= power;a++)
		{
			product = product * base;
		}
		cout<<base<<" to the power "<<power<<" is equal to "<<product<<endl;
		cout<<"do you wish to continue? press y for yes and N for no:   ";
		cin>>choice;
	}
	return 0;
}
