#include<iostream>
using namespace std;
struct stud_info{
	string name;
	int rollno;
	int marks[5];
};
int main(){
	stud_info student1,student2;
	student1 = {"Ali khan",10,{48,45,40,42,31}};
	student2 = {"zain ul islam ",26,{95,96,92,99,98}};
	cout<<student1.name<<" info: "<<endl;
	cout<<"name: "<<student1.name<<endl;
	cout<<"rollno: "<<student1.rollno<<endl;
	cout<<"marks: "<<endl;
	/*cout<<student1.marks[0]<<endl;
	cout<<student1.marks[1]<<endl;
	cout<<student1.marks[2]<<endl;
	cout<<student1.marks[3]<<endl;
	cout<<student1.marks[4]<<endl;*/
	for(int a = 0;a < 5; a++)
	{
		cout<<student1.marks[a]<<endl;
	}
	cout<<student2.name<<" info: "<<endl;
	cout<<"name: "<<student2.name<<endl;
	cout<<"rollno: "<<student2.rollno<<endl;
	cout<<"marks: "<<endl;
	/*cout<<student2.marks[0]<<endl;
	cout<<student2.marks[1]<<endl;
	cout<<student2.marks[2]<<endl;
	cout<<student2.marks[3]<<endl;
	cout<<student2.marks[4]<<endl;*/
	for(int a = 0;a < 5; a++)
	{
		cout<<student2.marks[a]<<endl;
	}
	return 0;
}
