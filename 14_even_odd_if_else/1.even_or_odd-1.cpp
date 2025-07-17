#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number to check whether it is Even of Odd: "<<endl;
	cin>>number;
	if(number%2==0)
	cout<<"The number you entered is an even number ";
	else
	cout<<"The number you entered is an odd number ";
	return 0;
}
