#include<iostream>
using namespace std;
class reverse{
	int n;
	public:
		void getdata(){
			cout<<"enter a number to find it's reverse: ";
			cin>>n;
		}
		void setdata(){
			int rev = 0;
			while(n > 0){
				rev = (rev * 10) + n % 10;
				n = n/10;
			}
			cout<<"\nreverse = "<<rev;
		}
};
int main()
{
	reverse num;
	num.getdata();
	num.setdata();
return 0;
}


