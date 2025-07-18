#include<iostream>
using namespace std;
int main()
{
	int number,start,end;
	cout<<"enter the number to calculate it's product: ";
	cin>>number;
	cout<<"enter the start value: ";
	cin>>start;
	cout<<"enter the end value: ";
	cin>>end;
	int a = start;
	while(a <= end)
	{
 	cout<<number<<" * "<<a<<" = "<<number * a<<endl;
 	a++;
 	}
 	return 0;
}
