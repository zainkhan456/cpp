#include<iostream>
using namespace std;
int main()
{
	float sum = 0,a;
	float x;
	int terms;
	cout<<"enter the value of x: ";
	cin>>x;
	cout<<"enter the number of terms: ";
	cin>>terms;
	for(a = 0;a < terms;a++)
	sum = sum + (x / (x + a));
	cout<<"the sum of your series is = "<<sum;
	return 0;
}
