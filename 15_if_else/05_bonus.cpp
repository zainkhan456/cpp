#include<iostream>
using namespace std;
int main()
{
	int current_year,joined_year,year_of_service,bonus;
	cout<<"please enter the year in which the employ joined the organization: ";
	cin>>joined_year;
	cout<<"please enter the current year: ";
	cin>>current_year;
	year_of_service = current_year - joined_year;
	if (year_of_service > 3)
	{
		bonus = 2500;
		cout<<"the bonus given to the employ is = "<<bonus;
	}
	return 0;
}
