#include<iostream>
using namespace std;
int main()
{
	int hardness,strength;
	float c_content;
	cout<<"enter the value of hardness of the steel: "<<endl;
	cin>>hardness;
	cout<<"enter the value of carbon contents of the steel: "<<endl;
	cin>>c_content;
	cout<<"enter the value of the tensile strength of the steel: "<<endl;
	cin>>strength;
	if(hardness > 50 && c_content < 0.7 && strength > 5600 )
	cout<<"the grade of the steel is 10";
	else if (hardness > 50 && c_content < 0.7 )
	cout<<"the grade of the steel is 9";
	else if(c_content < 0.7 && strength > 5600)
	cout<<"the grade of the steel is 8";
	else if(hardness > 50 && strength > 5600 )
	cout<<"the grade of the steel is 7";
	else if(hardness > 50 || c_content < 0.7 || strength > 5600)
	cout<<"the grade of the steel is 6";
	else
	cout<<"the grade of the steel is 5";
	return 0;
}
