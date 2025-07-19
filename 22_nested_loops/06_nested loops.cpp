#include<iostream>
using namespace std;
int main()
{
	int number,sum ;
	char choice = 'y';
	while(choice == 'y' || choice == 'Y')
	{
		system("cls");
		sum = 0;
		cout<<"enter the value of any number to calculate it's sum from 1 to that number: ";
		cin>>number;
		for(int a = 1; a <= number;a++)
		sum = sum + a;
		cout<<"the sum of numbers from 1 to "<<number<<" is equal to "<<sum<<endl;
		cout<<"do you wish to repeat? (press y for yes and N for no):  ";
		cin>>choice;
	}
	return 0;
}
