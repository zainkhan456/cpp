#include<iostream>
using namespace std;
int main()
{
	int length,width,area,perimeter;
	cout<<"Enter the length and width of the rectangle: "<<endl;
	cin>>length>>width;
	area = length * width;
	perimeter = 2*(length + width);
	cout<<"The area of the rectangle is "<<area<<endl;
	cout<<"The perimeter of the rectangle is "<<perimeter;
	return 0;
}
