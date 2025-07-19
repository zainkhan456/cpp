#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int positive=0,negative = 0,zeros=0;
	int number;
	char choice;
	do
	{
		system("cls");
		cout<<"enter any integer: ";
		cin>>number;
		if(number > 0)
		positive++;
		else if (number < 0)
		negative++;
		else
		zeros++;
		cout<<"\n\nDo you want to repeat?(press y for yes and N for no )"<<endl;
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
	cout<<"\n\nthe count of positive integers are: "<<positive<<endl;
	cout<<"the count of negative integers are: "<<negative<<endl;
	cout<<"the count of zero are: "<<zeros<<endl;
	cout<<"your program will terminate now";
	return 0;
}
