#include<iostream>
using namespace std;
void swapping(int*,int*);
int main()
{
	int number1,number2;
	cout<<"enter the value in number1 variable: ";
	cin>>number1;
	cout<<"enter the value in number2 variable: ";
	cin>>number2;
	swapping(&number1,&number2);
	cout<<"\nthe value stored in number1 and number2 variable after swapping :  "<<number1<<" , "<<number2;
	return 0;
}
void swapping(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2 ; 
	*p2 = temp;
}
