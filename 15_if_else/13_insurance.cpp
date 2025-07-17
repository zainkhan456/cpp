#include<iostream>
using namespace std;
int main()
{
	char marital_status,gender;
	int age;
	cout<<"enter the marital status of the employ (for married input M and for unmarried input U) :";
	cin>>marital_status;
	cout<<"enter the gender of the employ (for male input m and for female input f) : ";
	cin>>gender;
	cout<<"enter the age of the employ: ";
	cin>>age;
	if((marital_status == 'M') || (marital_status == 'U' && gender == 'm' && age > 30) || (marital_status == 'U' && gender == 'f' && age > 25))
	cout<<"the employ will get the insurance";
	else
	cout<<"the employ will not get the insurance";
	return 0;
}
