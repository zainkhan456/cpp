#include<iostream>
using namespace std;
int main()
{
	int days,total_fine;
	cout<<"enter the number of days a member return the book late: ";
	cin>>days;
	if(days <= 5)
	{
		total_fine = days * 5;
		cout<<"your total fine is = "<<total_fine;
	}
	else if(days > 5 && days <= 10)
	{
		days = days - 5;
		total_fine = 25 + (days * 10);
		cout<<"your total fine is = "<<total_fine;
	}
	else if(days > 10)
	{
		
		total_fine = 75 + (days * 20);
		
		if(days <= 30)
		{
			days = days - 10;
			cout<<"your total fine is = "<<total_fine;
		}
		else
		{
			days = days - 10;
			cout<<"your total fine is = "<<total_fine;
			cout<<"\nyour library membership has been cancelled";
		}
	}
	return 0;
}
