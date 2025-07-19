#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int first,last;
	cout<<"enter the first and last number to calculate it's sum: "<<endl;
	cin>>first>>last;
	int a = first;
	do
	{
		sum = sum + a;
		a++;
	}while(a <= last);
	cout<<"the sum of numbers from "<<first<<" to "<<last<<" is = "<<sum;
	return 0;
}
