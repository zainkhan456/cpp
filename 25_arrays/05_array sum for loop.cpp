#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,sum = 0;
	for(i = 0; i < 5;i++)
	{
		cout<<"enter the value at array index "<<i<<": ";
		cin>>arr[i];
		sum = sum + arr[i];
	}
	cout<<"\nthe sum of all the values stored in your index is = "<<sum;
	return 0;
}
