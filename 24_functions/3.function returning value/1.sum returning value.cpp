#include<iostream>
using namespace std;
int sum();
int main()
{
	cout<<"you are in the main function \n\n";
	int answer;
	answer = sum();
	cout<<"\n\n\nyou are back in the main function ";
	cout<<"\nthe addition of two numbers is = "<<answer;
	return 0;
}
int sum()
{
	cout<<"you are inside the sum function \n\n";
	int number1,number2,result;
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	result = number1 + number2;
	return result;
}
