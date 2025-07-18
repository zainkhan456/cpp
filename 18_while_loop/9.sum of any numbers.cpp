#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int start,end;
	cout<<"enter the first and last number to calculate the sum:  "<<endl;
	cin>>start>>end;
	int a = start;
	while (a <= end)
	{
		sum = sum + a;
		a++;
	}
	cout<<"the sum of numbers from "<<start<<" to "<<end<<" is = "<<sum;
	return 0;
}
