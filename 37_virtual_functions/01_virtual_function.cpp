#include<iostream>
using namespace std;
class parent{
	public:
		/*....first it was not virual
		void funct1(){
			cout<<"zain khan"<<endl;
		}*/
		virtual void funct1(){
			cout<<"zain khan"<<endl;
		}
	
};
class child : public parent{
	public:
	void funct1(){
		cout<<"M.H.KHAN"<<endl;//function overriding
	}
};
int main(){
	parent *p,objp;
	child objc;
	p = &objp;
	objp.funct1();//early binding
	p->funct1();//early binding
	p = &objc;
	objc.funct1();//early binding
	/*...when parent class function was not virtual*/
	//p->funct1();//early binding (also display zain khan bcz in early binding compiler see funtion type)
	//now in p we have store the address of objc but it still call the function of the parent class bcz of early binding
	//so to solve this problem we have to make funct1 of the parent class virtual take uski late binding ho.
	
	//when parent class function was make virtual
	p->funct1();//late binding (now output is M.H.KHAN)
	return 0;
}
