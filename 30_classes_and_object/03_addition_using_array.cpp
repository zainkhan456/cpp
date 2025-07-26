#include<iostream>
using namespace std;
class array{
	int a,b;
	public:
		void setdata(){
		cout<<"enter two number: "<<endl;
		cin>>a>>b;
	}
	void getdata(){
		cout<<a<<"  +  "<<b<<" = ";
		cout<<a+b<<endl;
	}
};
int main()
{
	array a[5];
	for(int i = 0; i < 5; i++)
	a[i].setdata();
	for(int i = 0; i < 5;i++)
	a[i].getdata();
}
