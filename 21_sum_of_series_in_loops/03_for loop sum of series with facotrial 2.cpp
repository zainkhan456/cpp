#include<iostream>
using namespace std;
int main()
{
	float sum = 0;
	int terms;
	float factorial = 1;
	cout<<"enter the number of terms to calculate it's sum: ";
	cin>>terms;
	for(int a = 1;a <= terms;a++)
	{
		factorial = factorial * a;
		sum = sum + (1 / factorial);
	}
	cout<<"the sum of series is = "<<sum;
	return 0;
}
