#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int number,factorial;
	char choice = 'y';
	while(choice == 'y' || choice == 'Y')
	{
		system("cls");
		cout<<"enter the number to calculate it's factorial: ";
		cin>>number;
		factorial = 1;
		for(int a = number; a >= 1;a--)
		{
		factorial = factorial * a;
		}
		cout<<"the factorial of "<<number<<" is = "<<factorial<<endl;
		cout<<"do wish to repeat? pres y for yes and N for no :  ";
		cin>>choice;
	}
	return 0;
}
