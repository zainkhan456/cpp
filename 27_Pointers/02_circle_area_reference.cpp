#include<iostream>
using namespace std;
void CircleArea(float r,float &aref,float &cref)
{
aref = 3.14159 * r * r;
cref = 2 * 3.14159 * r;	
}
int main()
{
	float radius,area,circumference;
	cout<<"enter the radius of circle to calculate its area and circumference: "<<endl;
	cin>>radius;
	CircleArea(radius,area,circumference);
	cout<<"\nthe area of the cicle is = "<<	area;
	cout<<"\nthe circumference of the circle is = "<<circumference;
	return 0;
}
