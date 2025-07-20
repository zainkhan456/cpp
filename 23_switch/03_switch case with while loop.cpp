#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int number1, number2;
	int answer;
	int choice;
	char repeat = 'y';
	while(repeat == 'y' || repeat=='Y')
	{
	system("cls");
	cout<<"Enter your first number: ";
	cin>>number1;
	cout<<"Enter your second number: ";
	cin>>number2;
	cout<<"******************************************\n";
	cout<<"1. Press 1 to add two numbers\n";
	cout<<"2. Press 2 to perform subtraction\n";
	cout<<"3. Press 3 to perform multiplication\n";
	cout<<"4. Press 4 to perform division\n";
	cout<<"5. Press 5 to perform modulus\n";
	cout<<"******************************************\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
			cout<<"The result of addition operation is: "<<number1 + number2;
			break;
	case 2:
			cout<<"The result of subtraction operation is: "<<number1 - number2;
			break;
	case 3:
			cout<<"The result of multiplication operation is: "<<number1 * number2;
			break;
	case 4:
			cout<<"The result of division operation is: "<<number1 / number2;
			break;
	case 5:
			cout<<"The result of modulus operation is: "<<number1 % number2;
			break;
	default:
			cout<<"Please enter your choice between 1 and 5 only";	
			
	}
	cout<<"\nDo you want to repeat? (Press Y for Yes or N for No)";
	cin>>repeat;
}
return 0;
}
