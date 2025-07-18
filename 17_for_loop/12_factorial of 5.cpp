#include<iostream>
using namespace std;
int main()
{
	int product = 1;
	for(int a = 5; a > 1; a--)
	product = product * a;
	cout<<"the factorial of 5 is = "<<product;
	return 0;
}
