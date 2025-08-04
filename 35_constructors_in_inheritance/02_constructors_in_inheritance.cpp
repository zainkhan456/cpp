#include<iostream>
using namespace std;
class X{
	private:
		int a;
	public:
		X(){
			cout<<"zain"<<endl;
		}
};
class Y:public X{
	private:
		int b;
	public:
		Y(){//or Y():X(){
			cout<<"hasnain khan"<<endl;
		}
};
int main(){
	Y obj;
	
}
