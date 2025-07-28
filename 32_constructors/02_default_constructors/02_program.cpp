//default but explicit constructor
#include<iostream>
using namespace std;
class demo{
	int a ,b;
	public:
		demo();//constructor declare inside the class body
		void showdata(){
			cout<<a<<endl<<b<<endl;
		}
};
demo::demo(){//constructor define outside the class body
	a = 18;
	b = 19;
}
int main()
{
	demo s1;
	s1.showdata();
}
