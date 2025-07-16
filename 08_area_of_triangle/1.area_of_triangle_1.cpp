#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	float s,area;
	cout<<"enter the three side of the triangle to calculate it's area: "<<endl;
	cin>>a>>b>>c;
	s = (a+b+c)/2; //or (a+b+c)*0.5;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The area of the triangle is "<<area;
	return 0;
}
