#include<iostream>
using namespace std;
class account{
	private:
		static int limitbalance;
		public:
			static void setbalance(int b){
				limitbalance = b;
			}
};
int account::limitbalance;
int main()
{
	account a1;
	a1.setbalance(1000);
	//or
	account::setbalance(1000);
return 0;
}


