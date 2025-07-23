#include<iostream>
using namespace std;
struct student_info{
	string name;
	int rollno;
};
int main()
{
	student_info student[3];
	for(int i = 0; i < 3; i++)
	{
		cout<<"enter name of the student "<<i+1<<endl;
		getline(cin,student[i].name);
		cout<<"enter the roll no of student "<<i+1<<endl;
		cin>>student[i].rollno;
		cin.ignore();
	}
	cout<<"\n\n";
	for(int i = 0; i < 3; i++)
	{
		cout<<"Details of the student "<<i+1<<": "<<endl;
		cout<<"name: "<<student[i].name<<endl;
		cout<<"roll no: "<<student[i].rollno<<endl;
		cout<<endl;
	}
	return 0;	
}
