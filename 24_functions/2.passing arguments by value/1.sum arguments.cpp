#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
	int number1,number2;
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	sum(number1,number2);
	cout<<"\n\n\nyou are back in the main function ";
	return 0;
}
void sum(int a , int b)
{
	int result;
	result = a + b;
	cout<<"the sum of two numbers is = "<<result<<endl;
	
}
