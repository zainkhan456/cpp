#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char gender,qualification;
	int yos,salary;

	cout<<"enter the gender of the employee: for male enter M and for female enter F: ";
	gender = getchar();
	cout<<"enter the qualification of the employee: for graduate enter G and for postgraduate enter P: ";
	qualification = getche();
	cout<<"\nenter the year of service of the employee: ";
	cin>>yos;

	if(gender == 'M')
	{
		if(yos >= 10 && qualification == 'P')
		salary = 15000;
		else if((yos >= 10 && qualification == 'G') || (yos < 10 && qualification == 'P'))
		salary = 10000;
		else if(yos < 10 && qualification == 'G')
		salary = 7000;
	}
	else if(gender == 'F')
	{
		if(yos >= 10 && qualification == 'P')
		salary = 12000;
		else if(yos >= 10 && qualification == 'G')
		salary = 9000;
		else if(yos> 10 && qualification == 'P')
		salary = 10000;
		else if(yos < 10 && qualification == 'G')
		salary = 6000;
	}
	else
	{
		salary = 0;
		cout<<"enter M or F ";
	}
	cout<<"According to rules the salary of the employee is = "<<salary;
	return 0;
}
