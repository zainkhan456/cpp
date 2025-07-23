#include<iostream>
using namespace std;
struct student_info
	{
		string name;
		int rollno;
		char section;
		string address;
	};
	int main(){
		student_info st1,st2,st3;
		cout<<"enter the details of student 1 i-e: "<<endl;
		cout<<"name: ";
		getline(cin,st1.name);
		cout<<"roll number: ";
		cin>>st1.rollno;
		cout<<"section: ";
		cin>>st1.section;
		cout<<"address: ";
		cin.ignore();
		getline(cin,st1.address);
		cout<<"enter the details of student 2 i-e: "<<endl;
		cout<<"name: ";
		getline(cin,st2.name);
		cout<<"roll number: ";
		cin>>st2.rollno;
		cout<<"section: ";
		cin>>st2.section;
		cout<<"address: ";
		cin.ignore();
		getline(cin,st2.address);
		cout<<"student 1 information are: "<<endl;
		cout<<st1.name<<endl;
		cout<<st1.rollno<<endl;
		cout<<st1.section<<endl;
		cout<<st1.address<<endl<<endl;
		cout<<"student 2 information are: "<<endl;
		cout<<st2.name<<endl;
		cout<<st2.rollno<<endl;
		cout<<st2.section<<endl;
		cout<<st2.address<<endl;
		return 0;
	}
