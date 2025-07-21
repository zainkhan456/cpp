#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int number;
	cout<<"enter your starting number: ";
	cin>>number;

	for(int a = 0;a < 20; a++)
	{
		arr[a] = number;
		number++;
	}
	for(int a = 0;a < 20;a++)
	{
		cout<<arr[a]<<endl;
	}
	return 0;
}
