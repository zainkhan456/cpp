#include<iostream>
using namespace std;
int main()
{
	int number,start,end;
	cout<<"Enter the number to generate its table: ";
	cin>>number;
	
	cout<<"Enter the start of table: ";
	cin>>start;
	
	cout<<"Enter the end of table: ";
	cin>>end;
	
	for (int a = start;a <= end;a++)
	{
		cout<<number<<" * "<<a<<" = "<<number * a<<endl;
	}
	return 0;
}
