#include<iostream>
using namespace std;
void calculateArea(int l,int b,int *pArea,int *pPerimeter)
{
	*pArea = l * b;
	*pPerimeter = (2 * l) + (2 * b);
}
int main()
{
	int length,breadth,area,perimeter;
	cout<<"enter the lenght of rectangle: ";
	cin>>length;
	cout<<"enter the breath of rectangle: ";
	cin>>breadth;
	calculateArea(length,breadth,&area,&perimeter);
	cout<<"the area of rectangle is = "<<area<<endl;
	cout<<"the perimeter of rectangle is = "<<perimeter;
	return 0;
}
