#include<iostream>
using namespace std; 
int main()
{
	float basic_salary,gross_salary,travelling,conveyence,other;
	cout<<"enter the value of basic salary of the employ: "<<endl;
	cin>>basic_salary;
	travelling = 0.25 * basic_salary;
	conveyence = 0.3 * basic_salary;
	other = 0.25 * basic_salary;
	gross_salary = basic_salary + travelling + conveyence + other;
	cout<<"the gross salary of the employ is = "<<gross_salary;
	return 0;
}
