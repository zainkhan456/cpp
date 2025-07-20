#include<iostream>
using namespace std;
int main()
{
	int no1,no2;
	char choice;
	cout<<"enter your first and second number: "<<endl;
	cin>>no1>>no2;
	cout<<"press + for addition: "<<endl;
	cout<<"press - for subtraction: "<<endl;
	cout<<"press * for multiplication: "<<endl;
	cout<<"press / for division: "<<endl;
	cout<<"press % for remainder:"<<endl;
	cin>>choice;
	switch (choice)
	{
		case '+':
			cout<<"the addition of two number is = "<<no1 + no2<<endl;
			break ; 
		case '-': 
			cout<<"the subtraction of two numbers is = "<<no1 - no2<<endl;
			break ; 
		case '*':
			cout<<"the multiplication of two numbers is = "<<no1 * no2<<endl;
			break;
		case '/':
			cout<<"the division of two numbers is = "<<no1 / no2<<endl;
			break;
		case '%':
			cout<<"the remainder is = "<<no1 % no2<<endl;
			break ;
		default :
		cout<<"plz enter correct input ";
		
	}
	return 0;
}
