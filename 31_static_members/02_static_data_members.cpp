#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
	void setdata(int a , int b)
	{
		x = a;
		y = b;
		z = z + 1;
	}
	void showdata()
	{
		cout<<x<<endl<<y<<endl<<"static: "<<z<<endl;
	}
};
int demo::z = 0;//explicitly initialzes to zero
int main()
{
	demo ob1,ob2;
	int a,b;
	cout<<"enter the value in a for ob1: ";
	cin>>a;
	cout<<"enter the value in b for ob1: ";
	cin>>b;
	ob1.setdata(a,b);
	cout<<"enter the value in a for ob2: ";
	cin>>a;
	cout<<"enter the value in b for ob2: ";
	cin>>b;
	ob2.setdata(a,b);
	ob1.showdata();
	ob2.showdata();
}
