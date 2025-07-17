#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter a number of your own choice: ";
	cin>>number;
	if(number > 0)
	{
		cout<<"the number you entered was a positive number";
		if(number < 10)
		cout<<"the number you entered was less than 10 and a single digit number";
		else if(number >= 10 && number < 100)
		cout<<"the number you entered was equal or greater than 10 and less than 100 and it is a two digit number";
		else
		cout<<"the number you entered was equal or greater than 100";
	}
	else if(number == 0)
	cout<<"the number is equal to zero";
	else
	cout<<"the number was less than 0 and it is a negative number";
	return 0;
}
