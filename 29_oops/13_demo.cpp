#include<iostream>
using namespace std;
class demo{
	int x;
	public:
		static int y;
		void getdata(int a){
			x = a;
			y = y + 1;
		}
		void putdata(){
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
		static void abc(){
			cout<<"\ny = "<<y;
		}
};
int demo::y;
int main()
{
	demo aa;
	aa.getdata(5);
	aa.putdata();
	demo::abc();
	return 0;
return 0;
}


