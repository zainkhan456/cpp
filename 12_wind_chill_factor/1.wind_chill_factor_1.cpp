#include<iostream>
#include<math.h>
using namespace std; //10.48
int main()
{
	float temp,velocity,wind_chill_factor;
	cout<<"enter the values of temperature and wind velocity: "<<endl;
	cin>>temp>>velocity;
	//................................ALL ARE SAME........................................
	wind_chill_factor = 35.74 + 0.6215*temp + ( 0.4275*temp - 35.75) * pow(velocity,0.16);
	//wind_chill_factor = 35.74 + 0.6215*temp + 0.4275*temp*pow(velocity,0.16) - 35.75*pow(velocity,0.16);
	//wind_chill_factor = 35.74 + 0.6215*temp - 35.75*pow(velocity,0.16) + 0.4275*temp*pow(velocity,0.16);
	cout<<"The wind chill factor is = "<<wind_chill_factor;
	return 0;
	}
