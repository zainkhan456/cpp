#include<iostream>
using namespace std;
class X{
	private:
		int x,xx;
	public:
		X(int a,int b){
			x = a;
			xx = b;
		}
		int getx(){
			return x;
		}
		int getxx(){
			return xx;
		}
};
class Y: public X{
	private:
		int y;
	public:
		Y(int a,int b,int c):X(a,b){
			y = c;
		}
		int getc(){
			return y;
		}
};
int main(){
	Y obj(10,15,20);
	cout<<obj.getx()<<endl;
	cout<<obj.getxx()<<endl;
	cout<<obj.getc()<<endl;
	return 0;
}
