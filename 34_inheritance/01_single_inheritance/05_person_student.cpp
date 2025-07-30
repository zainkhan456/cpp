#include<iostream>
using namespace std;
class person{
	private:
		string name;
	protected:
		string address;
		void setname(string n){
			name = n;
		}
	public:
		string getname()
		{
			return name;
		}
};
class student:public person{
	private:
		int rollno;
	public:
		void setstname(string n)
		{
			setname(n);
		}
		void setaddress(string address){
			this->address = address;//////////this pointer
		}
		string getaddress(){
			return address;
		}
		void setrollno(int rollno){
			this->rollno = rollno; ///////////this pointer 
		}
		int getrollno(){
			return rollno;
		}
};
int main(){
	student s1;
	s1.setstname("zain khan");
	s1.setrollno(26);
	s1.setaddress("spalmai bala");
	cout<<"student data: "<<endl;
	cout<<"name: "<<s1.getname()<<endl;
	cout<<"rollno: "<<s1.getrollno()<<endl;
	cout<<"address: "<<s1.getaddress()<<endl;
	return 0;	
}
