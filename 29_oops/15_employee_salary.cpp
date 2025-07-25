#include<iostream>
using namespace std;
class empsalary{
	float basicpay,medallowance,tax,netpay;
	public:
		void setbasicpay(int bp){
			basicpay = bp;
		}
		void calcmedallowance(){
			medallowance = 0.1 * basicpay;
		}
		void calctax(){
		tax = 0.5 * basicpay;
		}
		void calcnetpay(){
			netpay = basicpay + medallowance - tax;
		}
		float getbaseicpay(){
			return basicpay;
		}
		float getmedallowance(){
			return medallowance;
		}
		float gettax(){
			return tax;
		}
		float getnetpay(){
			return netpay;
		}
};
int main()
{
  empsalary e1;
  e1.setbasicpay(10000);
  e1.calcmedallowance();
  e1.calctax();
  e1.calcnetpay();
  cout<<e1.getnetpay();
  
return 0;
}


