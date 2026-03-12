//static variable and static function
#include<iostream>
using namespace std;
class demo{
	int x;
	public:
	
	//Declaring static variable
		static int y;
		void setdata(int a){
			x = a;
			y = y + 1;
		}
		void showdata(){
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}

		//static function -> can only access static variables
		static void abc(){
			cout<<"\ny = "<<y;
		}
};
int demo::y; //this line allocates memory to y
int main()
{
	demo aa;
	aa.setdata(5);
	aa.showdata();
	demo::abc();
	return 0;
return 0;
}


