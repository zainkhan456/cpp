#include<iostream>
using namespace std;
class ReverseNum{
	int n;
	public:
		void setdata(){
			cout<<"enter a number to find it's reverse: ";
			cin>>n;
		}
		void getdata(){
			int rev = 0;
			while(n > 0){
				rev = (rev * 10) + n % 10;
				n = n/10;
			}
			cout<<"\nreverse = "<<rev<<endl;
		}
};
int main()
{
	ReverseNum num;
	num.setdata();
	num.getdata();
return 0;
}


