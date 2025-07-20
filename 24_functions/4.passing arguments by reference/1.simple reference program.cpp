#include<iostream>
using namespace std;
int main()
{
	int number;
	int& numberRef = number;
	number = 10;
	cout<<"the value stored in number variable is = "<<number;
	cout<<"\nthe value stored in number variable is = "<<numberRef;
	numberRef = 5;
	cout<<"\nthe number stored in numberRef variable is = "<<number<<endl;
	cout<<"the number stored in numberRef variable is = "<<numberRef<<endl;
	cout<<"\n\nthe square of number is = "<<number * number<<endl;
	cout<<"the square of the number is = "<<numberRef * numberRef;
	return 0;
}
