//default but explicit constructor
#include<iostream>
using namespace std;
class demo{
	int a ,b;
	public:
		demo(){//constructor declare and define inside the class body
				a = 10;
				b = 20;
		}
		void showdata(){
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	demo s1;
	s1.showdata();
	return 0;
}
