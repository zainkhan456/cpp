#include<iostream>
using namespace std; 
int main()
{
	int number;
	cout<<"enter a number to check whether it is even or odd: "<<endl;
	cin>>number;
	if(number%2!=0)
	cout<<"the number you entered is an odd number ";
	else
	cout<<"the number is an even number ";
	return 0;
}
