#include<iostream>
#include<string>
using namespace std;
class person{
	private:
		string name;
	public:
		person(string n){
			name = n;
		}
		string getname(){
			return name;
		}
};
class student:public person{
	private:
		int rollno;
	public:
		student(string n,int r):person(n){
			rollno = r;
		}
		int getrollno(){
			return rollno;
		}
};
int main(){
	string name;
	int rollno;
	cout<<"enter the name of the student: ";
	getline(cin,name);
	cout<<"enter the rollno of the student: ";
	cin>>rollno;
	student s1(name,rollno);
	cout<<"student data: "<<endl;
	cout<<s1.getname()<<endl;
	cout<<s1.getrollno()<<endl;
	return 0;	
}
