#include<iostream>
using namespace std;
int main()
{
	int number,start,end;
	cout<<"enter the number to calculate it's table: ";
	cin>>number;
	cout<<"enter the start of the number: ";
	cin>>start;
	cout<<"enter the end of your number: ";
	cin>>end;
	int a = start;
	do
	{
		cout<<number<<" * "<<a<<" = "<<number * a<<endl;
		a++;
	}while(a <= end);
	return 0;
	
}
