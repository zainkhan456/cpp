#include<iostream>
using namespace std;
int main()
{
	int length,width,area,perimeter;
	cout<<"enter the length of the rectangle: ";
	cin>>length;
	cout<<"enter the width of the rectangle: ";
	cin>>width;
	area = length * width;
	perimeter = (2*length) + (2*width);
	cout<<"the area of the rectangle is "<<area<<endl;
	cout<<"the perimeter of the rectangle is "<<perimeter;
	return 0;
}

