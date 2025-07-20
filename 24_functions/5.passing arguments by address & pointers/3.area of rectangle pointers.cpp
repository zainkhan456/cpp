#include<iostream>
using namespace std;
void area_perimeter(int,int,int*,int*);
int main()
{
	int length,width,area,perimeter;
	cout<<"enter the length of the rectangle: ";
	cin>>length;
	cout<<"enter the width of the rectangle: ";
	cin>>width;
	area_perimeter(length,width,&area,&perimeter);
	cout<<"the area of the rectangle is = "<<area<<endl;
	cout<<"the perimeter of the rectangle is = "<<perimeter<<endl;
	return 0;
}
void area_perimeter(int l,int w,int *A,int *P)
{
	*A = l * w;
	*P = 2 * (l + w);
}
