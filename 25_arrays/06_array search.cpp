#include<iostream>
using namespace std;
int main()
{
int arr[10];
int number;
int flag = 0;
cout<<"Enter 10 numbers: ";
for (int a = 0; a < 10;a++)
{
cin>>arr[a];	
}	
cout<<"Enter a number to search in the array: ";
cin>>number;
for(int a=0;a<10;a++)
{
	if(number == arr[a])
	{
		flag = 1;
		break;
	}
}
if(flag == 0)
{
	cout<<"Search unsuccessfull";
}
else
{
	cout<<"Search successfull";
}
return 0;
}
