#include<iostream>
using namespace std;
class x{
	public:
		~x(){
			cout<<"destructor in the parent class"<<endl;
		}
};
class y:public x{
	public:
		~y(){
			cout<<"destructor in the child class"<<endl;
		}
};
int main(){
	y obj;
	return 0;
}
