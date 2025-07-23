#include<iostream>
using namespace std;
struct stud_info{
	string name;
	int rollno;
	int mark[5];
};
int main()
{
 stud_info students[10];
 students[0] = {"hamza habib",5,{4,5,8,9,10}};
 students[1] = {"zain ul islam",26,{10,9,8,5,3}};
 cout<<"student 1 info: "<<endl<<"name: "<<students[0].name<<endl;
 cout<<"roll no: "<<students[0].rollno<<endl;
 cout<<"marks: "<<endl;
 for(int i = 0 ; i < 5; i++)
 {
 	cout<<students[0].mark[i]<<endl;
 }
 cout<<"student 2 info: "<<endl<<"name: "<<students[1].name<<endl;
 cout<<"roll no: "<<students[1].rollno<<endl;
 cout<<"marks: "<<endl;
 for(int i = 0;i < 5; i++)
 {
 	cout<<students[1].mark[i]<<endl;
 }
return 0;
}


