#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the number to calculate it's product: ";
	cin>>number;
	int a = 1;
	while(a <= 10)
	{
 	cout<<number<<" * "<<a<<" = "<<number * a<<endl;
 	a++;
 	}
 	return 0;
}
