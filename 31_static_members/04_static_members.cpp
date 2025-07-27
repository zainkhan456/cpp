#include<iostream>
using namespace std;
class account{
	private:
	static int limitbalance;
	public:
		static void setbalance(int b)
		{
			limitbalance = b;
			cout<<"static: "<<limitbalance<<endl;
		}
};
int account::limitbalance;
int main()
{
	account::setbalance(1000);
	account a1;
	a1.setbalance(2000);//we can also call static member function through object
return 0;	
}
