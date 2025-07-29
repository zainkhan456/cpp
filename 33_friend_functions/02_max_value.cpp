
#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		void inputa(){
		cout<<"enter a: ";
		cin>>a;
		}
		friend void max(A,B);
};
class B{
	int b;
	public:
		void inputb()
		{
			cout<<"Enter b: ";
			cin>>b;
		}
	friend void max(A,B);
};
		void max(A aa,B bb){
			if(aa.a > bb.b)
			cout<<"max a: "<<aa.a;
			else
			cout<<"max b: "<<bb.b;
		}

int main()
{
	A aa;
	B bb;
	aa.inputa();
	bb.inputb();
	max(aa,bb);
	return 0;
}
