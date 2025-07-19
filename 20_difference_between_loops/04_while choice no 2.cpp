#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int number1,number2;
	char choice = 'y';
	while(choice == 'y' || choice == 'Y')
	{
		system("cls");
		cout<<"enter the first number: ";
		cin>>number1;
		cout<<"enter the second number: ";
		cin>>number2;
		cout<<"addition = "<<number1 + number2<<endl;
		cout<<"subtraction = "<<number1 - number2<<endl;
		cout<<"multiplication = "<<number1 * number2<<endl;
		cout<<"division = "<<number1/number2<<endl;
		cout<<"remainder = "<<number1%number2<<endl;
		cout<<"\n\nDo you want to repeat? ( press y for yes and N for no)"<<endl;
		cin>>choice;
	}
	cout<<"\nyour program will terminate now";
	return 0;
}
