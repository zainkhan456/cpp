//extra => object as function argument
/* This program gets two pair of inputs i-e Hours and minutes from user and then 
 add then to calculate the total hours and minutes */

#include<iostream>
using namespace std;
class Time{
	int hours,minutes;
	public:
		void getdata(){
			cout<<"enter the value of hours: ";
			cin>>hours;
			cout<<"enter the value of minutes: ";
            cin>>minutes;
		}
		void setdata(){
			cout<<"\nhour: "<<hours<<endl;
			cout<<"minutes: "<<minutes<<endl;
		}

        //Function to calculate the total hours
		void totalhours(Time t1,Time t2){
			hours = (t1.minutes + t2.minutes)/60;//Add the minutes and convert it to hours
			minutes = (t1.minutes + t2.minutes) % 60;//Add minutes
			hours = hours + (t1.hours + t2.hours);//Calculate the total hours
		}
};
int main()
{
	Time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3.totalhours(t1,t2);
	t1.setdata();
	t2.setdata();
	t3.setdata();
return 0;
}


