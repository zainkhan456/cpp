#include<iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[5];
	for(int i = 0;i < 5; i++)
	{
		cout<<"enter value at array index "<<i<<" : ";
		cin>>arr1[i];
		arr2[i] = arr1[i];
	}
	cout<<"\nthe values stored in the array 1 and 2 are printed below: "<<endl;
	for(int i = 0; i < 5; i++)
	{
		cout<<arr1[i]<<"  "<<arr2[i]<<endl;
	}
	return 0;
}
