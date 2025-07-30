#include<iostream>
#include<string>
using namespace std;
class person{
	private:
		string name;
		string address;
	public:
		void setname(string n)
		{
			name = n;
		}
		void setaddress(string addr)
		{
			address = addr;
		}
		string getname()
		{
			return name;
		}
		string getaddress()
		{
			return address;
		}
};
class student : public person{
	private:
		int rollno;
	public:
		void setrollno(int r){
			rollno = r;
		}
		int getrollno()
		{
			return rollno;
		}
};
int main(){
	student s1;
	s1.setname("zain");
	s1.setrollno(26);
	s1.setaddress("spalmai");
	cout<<"name: "<<s1.getname()<<endl;
	cout<<"rollno: "<<s1.getrollno()<<endl;
	cout<<"address: "<<s1.getaddress()<<endl;
	return 0;
	
}
