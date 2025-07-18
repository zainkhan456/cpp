#include<iostream>
using namespace std;
int main()
{
	int product = 1;
	int a = 5;
	while(a > 1)
	{
		product = product * a ;
		a--;
	}
	cout<<"the factorial of 5 is = "<<product;
	return 0;
}
