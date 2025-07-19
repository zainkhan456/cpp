#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int terms,a;
	cout<<"enter the number of terms to calculate it's sum: ";
	cin>>terms;
	for(a = 1;a <= terms;a++)
	sum = sum + (a * a);
	cout<<"the sum of your series is = "<<sum;
	return 0;
}
