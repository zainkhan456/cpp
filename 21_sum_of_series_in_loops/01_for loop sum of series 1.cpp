#include<iostream>
using namespace std;
int main()
{
	float sum = 0;
	float a = 1;
	int terms;
	cout<<"enter the number of terms to calculate it's sum:  ";
	cin>>terms;
	for(;a <= terms;a++ )
	sum = sum + (1/a);
	cout<<"the sum your series is = "<<sum;
	return 0;
}
