#include<iostream>
using namespace std;
int main()
{
	float celcius,fahrenheit,kelvin;
	cout<<"enter the value of temperature in celcius: "<<endl;
	cin>>celcius;
	fahrenheit = (celcius * 9/5) + 32;
	kelvin = celcius + 273.15;
	cout<<"the temperature in fahrenheit is "<<fahrenheit<<endl;
	cout<<"the temperature in kelvin is "<<kelvin;
	return 0;
}
