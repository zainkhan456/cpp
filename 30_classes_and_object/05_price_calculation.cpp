#include<iostream>
using namespace std;
class addproduct{
	int price;
	public:
	void getprice(int p){
			price = p;
	}
	void showprice()
	{
		cout<<"price of the product is : "<<price<<endl;
	}
	addproduct addprice(addproduct p)
	{
		addproduct temp_p;
		temp_p.price = price + p.price;
		return temp_p;
	}
};
int main()
{
	addproduct p1,p2,p3;
	int price1,price2;
	cout<<"enter the price of product 1: ";
	cin>>price1;
	cout<<"enter the price of product 2: ";
	cin>>price2;
	p1.getprice(price1);
	p2.getprice(price2);
	p3 = p1.addprice(p2);
	p1.showprice();
	p2.showprice();
	p3.showprice();
	return 0;
}
