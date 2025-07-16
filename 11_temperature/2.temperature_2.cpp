#include<iostream>
using namespace std;
int main()
{
	float C,F,K;
	cout<<"enter the value in celcius: ";
	cin>>C;
	F = (C * 9/5) + 32;
	K = C + 273.15;
	cout<<"the temperature in fahrenheit is = "<<F<<endl;
	cout<<"the temperature in kelvin is = "<<K;
	return 0;
}
