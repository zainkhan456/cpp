#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
		public:
			static int c;
			void getdata(int x,int y){
			a = x; 
			b = y;
			c = c+1;
			}
			void putdata(){
				cout<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<endl;
			}
};
int demo::c;
int main()
{
	demo obj1,obj2;
	obj1.getdata(5,8);
	obj2.getdata(20,15);
	obj1.putdata();
	obj2.putdata();
return 0;
}


