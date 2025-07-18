#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int a = 1;
	while(a <= 10 )
	{
		sum = sum + a;
		a = a + 2;
	}
	cout<<"the sum of even numbers from 0 to 10 is = "<<sum;
	return 0;
}


