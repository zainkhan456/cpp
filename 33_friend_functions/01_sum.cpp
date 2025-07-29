#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
		void getdata(){
			cout<<"enter two number: ";
			cin>>a>>b;
		}
		friend int sum(demo);
};
int sum(demo aa)
{
	return aa.a + aa.b;
}
int main()
{
	demo aa;
	aa.getdata();
	cout<<"addition: "<<sum(aa);
	return 0;
}
