#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter any number of your own choice: ";
	cin>>number;
	if(number == 0)
	cout<<"the number you entered is equal to zero";
	else if(number > 0)
	cout<<"the number you entered is greater than 0 and a positive number";
	else
	cout<<"the number you entered is less than o and a negative number";
	return 0;
}
