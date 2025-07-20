#include<iostream>
using namespace std;
void leafyear();
int main()
{
	cout<<"your program control is in the main function\n\n\n";
	leafyear();
	cout<<"\n\n\nyou are back in the main function ";	
}
void leafyear()
{
	int year;
	cout<<"enter the year to find whether it is leaf or not: ";
	cin>>year;
	if(year %4 == 0 )
	cout<<"the year you entered is a leaf year ";
	else
	cout<<"the year you entered is not a leaf year ";
}
