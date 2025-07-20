#include<iostream>
using namespace std;
void sum();
int main()
{
	cout<<"the program control is in the main function\n\n\n";
	sum();
	cout<<"the program control is back into the main function";
	
}
void sum()
{
	cout<<"the program control is now in the sum() function \n\n\n";
	int number1,number2,result;
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	cout<<"\nthe addition of two numbers is = "<<number1 + number2<<endl;
	cout<<"the subtraction of two numbers is = "<<number1 - number2<<endl;
	cout<<"the multiplication of two numbers is = "<<number1 * number2<<endl;
	cout<<"the division of two numbers is = "<<number1/number2<<endl;
	cout<<"\n\n\nthe sum function has concluded:\nthe program control will now get bact into the main function\n\n\n";	
}
