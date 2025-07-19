#include<iostream>
using namespace std;
int main()
{
	int product = 1;
	int a = 1;
	do
	{
		product = product * 2;
		a++;
	}while(a <= 5);
	cout<<"2 to the power 5 is = "<<product;
	return 0;
}
