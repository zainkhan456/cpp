#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for (int a = 0;a<5;a++)
	{
	cout<<"Enter value in the array location "<<a+1<<" ";
	cin>>arr[a];
	}
	
for(int a = 0;a<5;a++)
{
	cout<<"The value in array location "<<a+1<<" is = "<<arr[a]<<endl;
}
	return 0;
}
