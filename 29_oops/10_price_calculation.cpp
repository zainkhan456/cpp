#include<iostream>
using namespace std;
class product{
	int price;
	public:
		void setprice(int p){
			price = p;
		}
		void showprice(){
			cout<<"price of product: "<<price<<endl;
		}
		product add(product p){
			product temp_p;
			temp_p.price = price + p.price;
			return temp_p;
		}
};
int main()
{
	product p1,p2,p3;
	int price1,price2;
	cout<<"enter the price of p1: ";
	cin>>price1;
	p1.setprice(price1);
	cout<<"enter the price of product p2: ";
	cin>>price2;
	p2.setprice(price2);
	p3 = p1.add(p2);
	p1.showprice();
	p2.showprice();
	p3.showprice();
	
return 0;
}


