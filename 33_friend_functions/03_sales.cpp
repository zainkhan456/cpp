#include<iostream>
using namespace std;
class product2;
class product1{
	int totalsalep1;
	public:
		void settotalsalep1(int s1){
			totalsalep1 = s1;
		}
		friend int addsales(product1,product2);
};
class product2{
	int totalsalep2;
	public:
		void settotalsalep2(int s2){
			totalsalep2 = s2;
		}
		friend int addsales(product1,product2);
};
int addsales(product1 p1,product2 p2){
	return p1.totalsalep1 + p2.totalsalep2;
}
int main()
{
	product1 p1;
	product2 p2;
	p1.settotalsalep1(1000);
	p2.settotalsalep2(2000);
	cout<<"total sale: "<<addsales(p1,p2);
	return 0;
	
}
