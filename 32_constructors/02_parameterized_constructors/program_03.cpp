#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		student(string n){
			name = n;
		}
		student(int r){
			rollno = r;
		}
		student(int r,string n){
			name = n;
			rollno = r;
		}
		student(string n,int r)
		{
			name = n;
			rollno = r;
		}
		string getname(){
			return name;
		}
		int getrollno(){
			return rollno;
		}
};
int main(){
	student s1("hamza");
	cout<<s1.getname()<<endl;
	student s2(3);
	cout<<s2.getrollno()<<endl;
	student s3(8,"Asim");
	cout<<"name: "<<s3.getname()<<endl;
	cout<<"roll no: "<<s3.getrollno()<<endl;
	student s4("zain",2);
	cout<<"name: "<<s4.getname()<<endl;
	cout<<"roll no: "<<s4.getrollno()<<endl;
	return 0;
}
