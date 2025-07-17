
#include<iostream>
using namespace std;
int main()
{
	int angle1,angle2,angle3,sum;
	cout<<"enter the three angles of the triangle: "<<endl;
	cin>>angle1>>angle2>>angle3;
	sum = angle1 + angle2 + angle3;
	if(sum == 180)
	cout<<"the triangle is valid";
	else
	cout<<"the triangle is invalid";
	return 0;
}
