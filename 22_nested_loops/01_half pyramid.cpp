#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the number of rows of the pyramid: ";
	cin>>rows;
	for(int a = 1;a <= rows;a++ )
	{
		for(int j = 1; j <= a;j++)
		cout<<"*";
		
		cout<<endl;
	}
	return 0;
}
