#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int number;
	int times = 0;
	cout<<"enter 10 numbers: ";
	for(int a = 0;a < 10; a++)
	cin>>arr[a];
	cout<<"enter the number to search: ";
	cin>>number;
	for(int a = 0;a < 10;a++)
	{
		if(number == arr[a])
		times++;
	}
	if(times > 0)
	{
		cout<<"the number was present in the array..."<<endl;
		cout<<"the number was present "<<times<<" number of times";
	}
	else
	cout<<"the number was not present in the array..";
}
