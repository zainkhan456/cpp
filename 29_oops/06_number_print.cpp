#include<iostream>
using namespace std;
class oneton{
	int n;
	public:
		void setdata(){
			cout<<"enter the a number: ";
			cin>>n;
		}
		void getdata(){
			for(int i = 1;i <= n;i++ )
			cout<<i<<endl;
		}
};

int main()
{
	oneton print;
	print.setdata();
	print.getdata();
return 0;
}


