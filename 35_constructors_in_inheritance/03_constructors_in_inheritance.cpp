#include<iostream>
using namespace std;
class X{
	public:
		X(int a){
			cout<<a<<endl;
		}
};
class Y: public X{
	public:
		Y():X(10){
			cout<<"nothing"<<endl;
		}
};
int main(){
	Y obj;
	
}
