#include<iostream>
using namespace std;
class addition{
	int a,b;
	public:
		void setdata();
		void getdata();
};
void addition::setdata(){
	cout<<"enter two numbers: ";
	cin>>a>>b;
}
void addition::getdata(){
	cout<<a + b;
}
int main(){
	addition add;
	add.setdata();
	add.getdata();
	return 0;
}
