#include<iostream>
using namespace std;
void swapvalues(int&,int&);
int main()
{
	int number1,number2;
	cout<<"enter the value in number1 variable: ";
	cin>>number1;
	cout<<"enter the value in number2 variable: ";
	cin>>number2;
	cout<<"the value stored in number1 variable is "<<number1<<endl;
	cout<<"the value stored in number2 variable is "<<number2<<endl;
	swapvalues(number1,number2);
	cout<<"the values stored in number1 variable after swapping is = "<<number1<<endl;
	cout<<"the values stored in number2 variable after swapping is = "<<number2<<endl;
	return 0 ;
	
}
void swapvalues(int& number1Ref,int& number2Ref)
{
	int temp;
	temp = number1Ref;
	number1Ref = number2Ref;
	number2Ref = temp;
}
