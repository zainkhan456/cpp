#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the number to calculate it's table: ";
	cin>>number;
	int a = 1;
	do
	{
		cout<<number<<" * "<<a<<" = "<<number * a<<endl;
		a++;
	}while(a <= 20);
	return 0;
	
}
