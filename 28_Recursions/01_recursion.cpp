#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n == 0)
		return 1;
	else
		return (n * factorial(n-1));	
}
int main()
{
	cout<<"The factorial of 5 is = "<<factorial(5);
	return 0;
}
