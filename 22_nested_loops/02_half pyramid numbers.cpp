#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the number of rows of your pyramid: ";
	cin>>rows;
	for(int a = 1;a <= rows;a++)
	{
		for(int b = 1;b <= a;b++)
		cout<<b;
		
		cout<<"\n";
	}
	return 0;
}
