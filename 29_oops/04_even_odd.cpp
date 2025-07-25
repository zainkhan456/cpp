#include<iostream>
using namespace std;
class evenodd{
	int a;
	public: 
	void setdata(){
		cout<<"enter a number to calculate whether it is even or odd: ";
		cin>>a;
	}
	void getdata(){
		if(a % 2 == 0)
		cout<<"the number you entered is an even number ";
		else
		cout<<"you have entered an even number ";
	}
};
int main()
{
	evenodd aa;
	aa.setdata();
	aa.getdata();
return 0;
}


