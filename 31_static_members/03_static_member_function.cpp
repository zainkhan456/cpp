#include<iostream>
using namespace std;
class demo{
	int a;
	static int b;
	public:
		void setdata(int x)
		{
			a = x;
			b = b+1;
		}
		void showdata(){
			cout<<a<<endl<<"static: "<<b<<endl;
		}
		static void stftn()
		{
			//cout<<a<<endl;----->wrong bcz static function can only access static members
			cout<<"static data member call by static data member function: "<<b<<endl;
		}
};
int demo::b = 0;
int main()
{
	demo obj;
	obj.setdata(5);
	obj.showdata();
	demo::stftn();
}
