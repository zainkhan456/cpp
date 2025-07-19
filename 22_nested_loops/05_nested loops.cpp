#include<iostream>
#include<stdlib.h>
using namespace std; 
int main()
{
	int number,sum;
	char choice;
	do
	{
		system("cls");
		sum = 0;
		cout<<"enter any number to calculate the sum of all numbers from 1 to the given number:  ";
		cin>>number;
		for(int a = 1;a <= number;a++)
		{
			sum = sum + a;
		}
		cout<<"the sum of all the numbers from 1 till "<<number<<" is = "<<sum<<endl;
		cout<<"do you wish to repeat?(press y for yes and N for ";
		cin>>choice;
	}while(choice == 'y' || choice == 'y');
	return 0;
}
