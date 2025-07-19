#include<iostream>
using namespace std;
int main()
{
	int rows,space;
	cout<<"enter the number of rows of your pyramid: ";
	cin>>rows;
	for(int a = 1 ; a <= rows; a++)
	{
		for(space = a;space < rows;space++)
		{
			cout<<" ";
		}
		for(int j = 1;j <= (2 * a - 1);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
