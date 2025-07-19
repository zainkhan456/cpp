//For 1 + 1/2*2 + 1/3*3 + 1/4*4 + 1/5*5 + .........
#include<iostream>
using namespace std;
int main()
{
	float sum = 0,product;
	int terms;
	float a;
	cout<<"enter the number of terms to calculate the sum: ";
	cin>>terms;
	for(a = 1; a <= terms;a++)
	{
		product =  a * a;
		sum = sum + (1 / product);
	}
	cout<<"the sum of your series is = "<<sum;
	return 0;
}
