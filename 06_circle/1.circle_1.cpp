#include<iostream>
using namespace std;
int main()
{
	float radius,area,circumference;
	const float pi = 3.14159;
	cout<<"enter the radius of the circle: "<<endl;
	cin>>radius;
	area = pi * radius * radius;
	circumference = 2 * pi * radius;
	cout<<"The area of the cirle is "<<area<<endl;
	cout<<"The circumference of the circle is "<<circumference;
	return 0;
}
