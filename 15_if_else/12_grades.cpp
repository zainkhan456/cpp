#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter the marks of the student: ";
	cin>>marks;
	if(marks >= 80)
	{
		cout<<"student got A+ grade";
		cout<<"congratulation";
	}
	else if(marks >=70 && marks <80)
	cout<<"student got A grade";
	else if(marks >=60 && marks < 70)
	cout<<"student got B grade";
	else if(marks >=50 && marks < 60)
	cout<<"student got C grade";
	else
	cout<<"the student is fail";
	return 0;
}
