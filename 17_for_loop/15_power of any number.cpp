#include<iostream>
using namespace std;
int main()
{
	int result = 1;
	int base,power;
	cout<<"base is : ";
	cin>>base;
	cout<<"power: ";
	cin>>power;
	for(int a = 1; a <= power;a++)
		result = result * base;
	cout<<base<<" to the power "<<power<<" is equal to "<<result;
	return 0;
}
