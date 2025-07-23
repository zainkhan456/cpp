#include<iostream>
using namespace std;
struct student_info{
	string name;
	int rollno;
};
int main()
{
	student_info student[2];
	cout<<"enter the details of student 1: "<<endl;
	student[0] = {"zain ul islam ",26};
	student[1] = {"hamza habib",21};
	cout<<"student 1 info: "<<endl;
	cout<<"name: "<<student[0].name<<endl;
	cout<<"roll no: "<<student[0].rollno<<endl<<endl;
	cout<<"student 2 info: "<<endl;
	cout<<"name: "<<student[1].name<<endl;
	cout<<"roll no: "<<student[1].rollno<<endl<<endl;
	return 0;	
}
