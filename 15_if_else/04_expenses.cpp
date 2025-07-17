#include<iostream>
using namespace std;
int main()
{
	int quantity;
	float price,expenses,discount = 0;
	cout<<"enter the qunatity of the items purchased: ";
	cin>>quantity;
	cout<<"enter the price per item: ";
	cin>>price;
	if(quantity >= 1000)
	discount = 0.1;
	expenses = (quantity * price) - (quantity * price * discount);
	cout<<"Your total expenses after giving you a discount of "<<discount<<" is equal to "<<expenses;
	return 0 ;
}
