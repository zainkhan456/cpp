#include<iostream>
using namespace std;
struct student{
	string name;
	int s1,s2,s3,s4;
};
int main()
{
	student st1 = {"zain ul islam",52,5,8,9};
	int totalmarks;
	totalmarks = st1.s1 + st1.s2 + st1.s3 + st1.s4;
	cout<<"name of the student: "<<st1.name<<endl;
	cout<<"marks of subject 1: "<<st1.s1<<endl;
	cout<<"marks of subject 2: "<<st1.s2<<endl;
	cout<<"marks of subject 3: "<<st1.s3<<endl;
	cout<<"marks of subject 4: "<<st1.s4<<endl;
	cout<<"total marks: "<<totalmarks;
	return 0;
	
}
