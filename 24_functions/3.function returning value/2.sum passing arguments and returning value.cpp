#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
	int number1,number2,answer;
	cout<<"you are in the main function \n\n\n";
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	answer = sum(number1,number2);
	cout<<"your program control is back in the main function ";
	cout<<"\n\nthe sum the given numbers is = "<<answer;
	return 0;
}
int sum(int a,int b)
{
	int result;
	cout<<"you are in the sum function \n\n";
	result = a + b;
	return result;
}
