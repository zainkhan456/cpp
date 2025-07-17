#include<iostream>
using namespace std;
int main()
{
	int length,breadth,area,perimeter;
	cout<<"enter the length of the rectangle:" ;
	cin>>length;
	cout<<"enter the breadth of the rectangle: ";
	cin>>breadth;
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	if(area>perimeter)
	cout<<"the area of the rectangle which is "<<area<<" is greater than its perimeter which is "<<perimeter;
	else
	cout<<"the area of the rectangle which is "<<area<<" is smaller than its perimeter which is "<<perimeter;
	return 0;
}
