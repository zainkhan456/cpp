
#include<iostream>
using namespace std;
int main()
{
	int days,total_fine;
	cout<<"enter the number of days a member is late to return the book: ";
	cin>>days;
	if(days <= 5)
	{
		total_fine = days * 5;
		cout<<"your total fine is = "<<total_fine;
	}
	else if(days > 5 && days <= 10)
	{
		total_fine = days * 10;
		cout<<"your total fine is = "<<total_fine;
	}
	else if(days > 10 && days <= 30)
	{
		total_fine = days * 20;
		cout<<"your total fine is = "<<total_fine;
	}
	else
	{
		total_fine = days * 20;
		cout<<"your total fine is = "<<total_fine<<endl;
		cout<<"your library membership has been cancelled";
	}
	return 0;
}
