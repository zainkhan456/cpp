#include<iostream>
using namespace std;
int main()
{
	float a,b,result;
	cout<<"enter the value of a: "<<endl;
	cin>>a;
	cout<<"enter the value of b: "<<endl;
	cin>>b;
	result = a*a + b*b + 2*a*b;
	cout<<"(a+b)2 = "<<result;
	return 0;
}
