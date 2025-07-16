#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mult,div,ramainder;
	cout<<"enter the value of a and b: "<<endl;
	cin>>a>>b;
	add = a+b; 
	sub=a-b; 
	mult = a*b;
	div = a/b;
	ramainder = a%b;
	cout<<"the addition of two number is "<<add<<endl;
	cout<<"the subtaraction of two number is "<<sub<<endl;
	cout<<"the multiplication of two number is "<<mult<<endl;
	cout<<"the division of two number is "<<div<<endl;
	cout<<"the ramainder is "<<ramainder;
}
