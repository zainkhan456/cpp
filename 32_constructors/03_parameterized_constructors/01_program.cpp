#include<iostream>
using namespace std;
class demo{
	private:
		int a ,b; 
	public:
		demo(int m ,int n){
			a = m ; 
			b = n ; 
		}
	void showdata(){
		cout<<a<<"  "<<b<<endl;
		cout<<"additoin: "<<a+b<<endl;
	}
};
int main(){
	int x,y;
	cout<<"enter two number: "<<endl;
	cin>>x>>y;
	demo obj(x,y);
	obj.showdata();
	
}
