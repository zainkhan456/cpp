#include<iostream>
using namespace std; 
int main()
{
	int number1,number2;
	char choice;
	do
	{
		cout<<"enter you first number: ";
		cin>>number1;
		cout<<"enter your second number: ";
		cin>>number2;
		cout<<"addition of two numbers = "<<number1 + number2<<endl;
		cout<<"the subtration of the numbers = "<<number1 - number2<<endl;
		cout<<"the multiplication of two numbers = "<<number1 * number2<<endl;
		cout<<"the division of the two numbers = "<<number1/number2;
		cout<<"the remainder of two numbers = "<<number1 % number2<<endl;
		cout<<"/ndo you wish to repeat ? (press y for yes and N for no)";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
	cout<<"the program will terminate now";
	return 0;
}
