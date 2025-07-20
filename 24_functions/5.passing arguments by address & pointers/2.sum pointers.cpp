
#include<iostream>
using namespace std;
void sum(int,int,int*);
int main()
{
	int number1,number2,result;
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	sum(number1,number2,&result);
	cout<<"the sum of "<<number1<<" and "<<number2<<" is = "<<result<<endl;
	return 0;
	
}
void sum(int a , int b,int *ptr)
{
	*ptr = a + b;
}


