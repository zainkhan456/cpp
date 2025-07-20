#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	int number1,number2,result;
	int choice;
	char repeat;
	do
	{
		system("cls");
		cout<<"enter your first number: ";
		cin>>number1;
		cout<<"enter your second number: ";
		cin>>number2;
		cout<<"press 1 for addition "<<endl;
		cout<<"press 2 for subtraction "<<endl;
		cout<<"press 3 for multiplication "<<endl;
		cout<<"press 4 for division "<<endl;
		cout<<"press 5 for modulus "<<endl;
		cin>>choice;
		switch(choice)
		{	
			case 1:
				cout<<"the result of addition operation is = "<<number1 + number2<<endl;
				break;
			case 2:
				cout<<"the result of subtraction operation is = "<<number1 - number2<<endl;
				break;
			case 3:
				cout<<"the result of multiplication operation is = "<<number1 * number2<<endl;
				break;
			case 4:
				cout<<"the result of division operation is = "<<number1 / number2<<endl;
				break;
			case 5:
				cout<<"the result of modulus operation is = "<<number1 % number2<<endl;
				break;
			default :
				cout<<"please enter the correct input from 1 to 5"<<endl;
		}
			cout<<"do you want to repeat?\npress y for yes and N for no"<<endl;
			repeat = getche();
	}while(repeat == 'y' || repeat == 'Y');

	return 0;
}
