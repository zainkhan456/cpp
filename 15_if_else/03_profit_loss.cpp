#include<iostream>
using namespace std;
int main()
{
	float cost_price,sale_price,profit,loss;
	cout<<"enter the cost price of the product: "<<endl;
	cin>>cost_price;
	cout<<"enter the sale price of the product: "<<endl;
	cin>>sale_price;
	profit = sale_price - cost_price;
	loss = cost_price - sale_price;
	if(sale_price > cost_price)
	{
		cout<<"you have made profit in this product "<<endl;
		cout<<"the profit you made is = "<<profit;
	}
	else if(cost_price > sale_price)
	{
		cout<<"you have made loss in this product "<<endl;
		cout<<"the loss you made is = "<<loss;
	}
	else
	{
		cout<<"you have made no profit nor loss in this product"<<endl;
		cout<<"the profit or loss you made is = "<<profit;
	}
	return 0;
}
