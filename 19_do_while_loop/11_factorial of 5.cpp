#include<iostream>
using namespace std;
int main()
{
	int product = 1;
	int a = 5;
	do 
	{
		product = product * a;
		a--;
	}while(a > 1);
	cout<<"the factorial of 5 is = "<<product;
	return 0;
}
