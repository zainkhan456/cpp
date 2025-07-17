#include<iostream>
using namespace std;
int main()
{
	float basic_salary,gross_salary,hra,da;
	cout<<"enter the basic salary of the employ: ";
	cin>>basic_salary;
	if(basic_salary < 1500)
	{
		hra = 0.1 * basic_salary;
		da = 0.9 * basic_salary;
		gross_salary = basic_salary + hra + da;
	}
	else
	{
	hra = 1500;
	da = 0.98 * basic_salary;
	gross_salary = basic_salary + hra + da;
	}
	cout<<"the gross salary of the employ is "<<gross_salary;
	return 0;
}
