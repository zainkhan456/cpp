#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;//declaration inside the class
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
};//definition outside the class
int demo::z;//implicitly initializes to zero
int main()
{
	demo ob1,ob2;
	ob1.setdata(5,2);
	ob2.setdata(9,8);
	ob1.showdata();
	ob2.showdata();
}
