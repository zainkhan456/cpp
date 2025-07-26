#include<iostream>
using namespace std;
class empsalary{
	private:
		string name;
		int basicpay,medallowance,tax,netpay;
		public:
			void setname(){
				cout<<"enter the name of the employee: "<<endl;
				getline(cin,name);
			}
			void setbasicpay(int bp){
				basicpay = bp;
			}
			void setdata(){
				medallowance = basicpay * 0.1;
				tax = basicpay * 0.05;
				netpay = basicpay + medallowance - tax;
			}
			string getname(){
				return name;
			}
			int getbasicpay(){
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
	empsalary emp1,emp2;
	int bpay;
	emp1.setname();
	cout<<"enter the basic pay of the employee: ";
	cin>>bpay;
	cin.ignore();
	emp1.setbasicpay(bpay);
	emp1.setdata();
	cout<<"name of the employee: "<<emp1.getname()<<endl;
	cout<<"medical allowance: "<<emp1.getmedallowance()<<endl;
	cout<<"tax: "<<emp1.gettax()<<endl;
	cout<<"netpay: "<<emp1.getnetpay()<<endl;
	cout<<"*********************************"<<endl;
	char c = 3;
	for (int i = 0; i < 33; i++)
	cout<<c;
	cout<<endl;
	emp2.setname();
	cout<<"enter the basic pay of the employee: ";
	cin>>bpay;
	emp2.setbasicpay(bpay);
	emp2.setdata();
	cout<<"name of the employ: "<<emp2.getname()<<endl;
	cout<<"medical allowance: "<<emp2.getmedallowance()<<endl;
	cout<<"tax: "<<emp2.gettax()<<endl;
	cout<<"netpay: "<<emp2.getnetpay()<<endl;
	return 0;
}
