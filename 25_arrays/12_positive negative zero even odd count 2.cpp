#include <iostream>
using namespace std;

int main() 
{
    int arr[10];
    int neg = 0;
    int pos = 0;
    int zeros = 0;
    int even = 0, odd = 0;

    cout << "Enter 10 numbers: " << endl;
    for (int a = 0; a < 10; a++) 
	{
        cin >> arr[a];
        if (arr[a] < 0) 
		{
            neg++;
        } 
		else if (arr[a] > 0) 
		{
            pos++;
        } 
		else 
		{
            zeros++;
        }

        if (arr[a] % 2 == 0) 
		{
            even++;
        } 
		else if (arr[a] != 0) 
		{
            odd++;
        }
    }
   	cout<<"the total number of positive numbers in the array: "<<pos<<endl;
	cout<<"the total number of negative numbers in the array: "<<neg<<endl;
	cout<<"total count zeros in the array                   : "<<zeros<<endl;
	cout<<"the total number of even numbers in the array    : "<<even<<endl;
	cout<<"the total number of odd numbers in the array     : "<<odd;
	return 0;
}
