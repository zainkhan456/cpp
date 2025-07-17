
#include<iostream>
using namespace std;
int main()
{
	int number1,number2,result;
	char operation;
	cout<<"ener the first number: ";
	cin>>number1;
	cout<<"enter the second number: ";
	cin>>number2;
	cout<<"enter the symbol to perform operatioin (+, -, *, / or %): ";
	cin>>operation;
	if(operation == '+')
	{
		result = number1 + number2;
		cout<<"the result of addition operation is = "<<result;
	}
	else if(operation == '-')
	{
		result = number1 - number2;
		cout<<"the result of subtraction operation is = "<<result;
	}
	else if(operation == '*')
	{
		result = number1 * number2;
		cout<<"the result of multiplication operation is = "<<result;
	}
	else if(operation == '/')
	{
		result = number1 / number2;
		cout<<"the result of division operation is = "<<result;
	}
	else if(operation ==  '%')
	{
		result = number1 % number2;
		cout<<"the remainder of two numbers after division is "<<result;
	}
	else
	cout<<"please enter a valid operation ";
	return 0;
}
