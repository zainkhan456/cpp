#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int a = 0; a < 20; a += 2)
		sum = sum + a;
	cout<<"the sum of even numbers from 0 to 20 is = "<<sum;
	return 0;
}
