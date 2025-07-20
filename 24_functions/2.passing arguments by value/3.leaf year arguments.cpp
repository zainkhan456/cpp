#include<iostream>
using namespace std;
void leafyear(int);
int main()
{
	int year;
	cout<<"enter the year to calculate whether it is leaf year or not: ";
	cin>>year;
	leafyear(year);//////////////actual arguments
	return 0;
}
void leafyear(int y)/////////////formal arguments
{
	if(y % 4 == 0)
	cout<<"the year you entered is a leaf year "<<endl;
	else
	cout<<"the year you entered is not a leaf year "<<endl;
}
