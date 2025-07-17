#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	if(number >= 0)
	{
		if(number > 50)
			cout<<"The number you entered was greater than 50";
		else if (number < 50)
			cout<<"The number you entered was less than 50";
		else
			cout<<"The number you entered was equal to 50";
	}
	else
		cout<<"The number you entered was a negative number";
	
}
