#include<iostream>
using namespace std;
int main()
{
	int angle1, angle2, angle3;
	//int sum;
	cout<<"Enter the values of three angles of a triangle\n";
	cin>>angle1>>angle2>>angle3;
	//sum = angle1 + angle2 + angle3;
	
	if (angle1 + angle2 + angle3 == 180)
	{
	if(angle1 == angle2 && angle2 == angle3)
		cout<<"Your triangle is an equilateral triangle";
	else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)	
		cout<<"Your triangle is an iscoceles triangle";
	else
		cout<<"Your triangle is a scalene triangle";
	}
	else
		cout<<"The triangle is an invalid triangle";
	cout<<"\nThe program will terminate now";
	return 0;
}
