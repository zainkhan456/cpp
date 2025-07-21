#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int number;
	int negative = 0;
	int positive = 0;
	int zero = 0;
	cout<<"enter 10 number: "<<endl;
	for(int a = 0; a < 10;a++)
	{
		cin>>arr[a];
		if(arr[a] < 0)
			negative++;
		else if(arr[a] > 0)
			positive++;
		else
			zero++;
	}
	cout<<"total count of positive numbers entered = "<<positive<<endl;
	cout<<"total count of negative numbers entered = "<<negative<<endl;
	cout<<"total count of zeros entered = "<<zero<<endl;
	return 0;
	
}
