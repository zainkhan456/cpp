#include<iostream>
using namespace std;
int main()
{
	int number1,number2,result;
	int choice;
	cout<<"enter your first number: ";
	cin>>number1;
	cout<<"enter your second number: ";
	cin>>number2;
	cout<<"press 1 for addition:\n";
	cout<<"press 2 for subtraction: \n";
	cout<<"press 3 for multiplication:\n";
	cout<<"press 4 for division: \n";
	cout<<"press 5 for remainder: \n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			result = number1 + number2;
			cout<<"the sum of two numbers is = "<<result<<endl;
			break;
		case 2: 
			result = number1 - number2;
			cout<<"the subtraction of two numbers is = "<<result<<endl;
			break;
		case 3: 
			cout<<"the multiplication of two numbers is = "<<number1 * number2<<endl;
			break;
		case 4: 
			cout<<"the division of two numbers is = "<<number1 / number2<<endl;
			break;
		case 5: 
			cout<<"the remainder is = "<<number1 % number2<<endl;
			break;
		default : 
		cout<<"plz enter your choice between 1 and 5 only ";
	}
	return 0;
}
