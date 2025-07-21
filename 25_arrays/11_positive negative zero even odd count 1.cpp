#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int pos = 0,neg = 0,even = 0,odd = 0,zero = 0;
	cout<<"enter 10 number: "<<endl;
	for(int a = 0;a < 10;a++)
	{
		cin>>arr[a];
		if(arr[a] > 0)
		{
			pos++;
			if(arr[a] % 2 == 0)
			even++;
			else
			odd++;
		}
		if(arr[a] < 0)
		{
			neg++;
			if(arr[a] % 2 == 0)
			even++;
			else
			odd++;
		}
		if(arr[a] == 0)
		{
			zero++;
			even++;
		}
	}
	cout<<"the total number of positive numbers in the array: "<<pos<<endl;
	cout<<"the total number of negative numbers in the array: "<<neg<<endl;
	cout<<"total count zeros in the array                   : "<<zero<<endl;
	cout<<"the total number of even numbers in the array    : "<<even<<endl;
	cout<<"the total number of odd numbers in the array     : "<<odd;
	return 0;
}
