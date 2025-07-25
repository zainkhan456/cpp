#include<iostream>
using namespace std;
class addition{
	private:
		int a,b;
		public: 
		void setdata(){
			cout<<"enter two number: ";
			cin>>a>>b;
		}
		void getdata(){
			cout<<"addition: "<<a+b;
		}
};
int main()
{
	addition add;
	add.setdata();
	add.getdata();
return 0;
}


