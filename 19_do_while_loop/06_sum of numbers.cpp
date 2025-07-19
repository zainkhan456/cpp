#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int a = 0;
	do
	{
		sum = sum + a;
		a++;
	}while(a <= 10);
	cout<<"the sum of numbers from 0 to 10 is = "<<sum;
	return 0;
}
