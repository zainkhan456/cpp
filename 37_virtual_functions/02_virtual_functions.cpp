#include<iostream>
#include<string>
using namespace std; 
class regemp{
	protected:
		double totalsalary,tax,netsalary;
	public:
		void settotalsalary(double ts){
			totalsalary = ts;
		}
		double gettotalsalary(){
			return totalsalary;
		}
		virtual void calcsalary(){
			tax = totalsalary * 0.1;
			netsalary = totalsalary - tax;
		}
		double getnetsalary(){
			return netsalary;
		}
};
class tempemp:public regemp{
	public:
		void calcsalary(){
			tax = totalsalary * 0.2;
			netsalary = totalsalary - tax;
		}
};
int main(){
	regemp *p,r1;
	tempemp t1;
	p = &t1;
	t1.settotalsalary(50000);
	p->calcsalary();
	cout<<"temporary employee net salary: "<<t1.getnetsalary()<<endl;
	p = &r1;
	r1.settotalsalary(50000);
	p->calcsalary();
	cout<<"regular employee net salary: "<<r1.getnetsalary()<<endl;
	return 0;
}
