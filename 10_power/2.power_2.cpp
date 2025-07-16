#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float base,power,result;
	cout<<"enter the value of base and power: "<<endl;
	cin>>base>>power;
	result = pow(base,power);
	cout<<base<<" to the power "<<power<<" is equal to "<<result;
	return 0;
}
