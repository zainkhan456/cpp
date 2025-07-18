#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the number to calculate it's table: ";
	cin>>number;
	for(int a = 0; a <= 20 ; a++)
	cout<<number<<" * "<<a<<" = "<<number * a<<endl;
	return 0;
}
