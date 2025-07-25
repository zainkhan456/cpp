#include<iostream>
using namespace std;
class array{
	int a,b;
	public:
		void setdata(){
			cout<<"enter two number:  ";
			cin>>a>>b;
		}
		void getdata(){
			cout<<a<<" "<<b<<endl;
		}
};

int main()
{
	array arr[5];
	for(int i = 0;i<5;i++)
	arr[i].setdata();
	for(int i = 0;i < 5;i++)
	arr[i].getdata();
return 0;
}


