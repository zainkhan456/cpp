#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int a = 1; a < 20; a += 2)
		sum = sum + a;
	cout<<"the sum of odd numbers from 0 t0 20 is = "<<sum;
	return 0;
}
