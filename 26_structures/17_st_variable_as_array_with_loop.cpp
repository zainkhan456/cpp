//not correct. corrected in st_8
#include<iostream>
#include<string>
#include<limits>
using namespace std;
struct stud_info{
	string name;
	int rollno;
	int marks[5];
};
int main()
{
 stud_info students[3];
 for(int i = 0 ; i < 3;i++)
 {
  cout<<"enter the student "<<i+1<<" info(name,rollno,marks of 5 subjects): "<<endl;
 //	cin>>students[i].name;
    cout<<"enter the name: "<<endl;
    getline(cin,students[i].name);
    cout<<"enter roll no: "<<endl;
 	cin>>students[i].rollno;
 	cin.ignore();
 	cout<<"enter marks: "<<endl;
 	for(int a = 0;a < 5;a++)
 	{
 		cin>>students[i].marks[a];
	}
}
for(int i = 0;i < 3; i++)
{
	cout<<"name of student "<<i+1<<": "<<students[i].name<<endl;
	cout<<"roll no of student "<<i+1<<": "<<students[i].rollno<<endl;
	cout<<"marks of student "<<i+1<<": ";
	for(int a = 0;a < 5;a++)
	{
	 cout<<students[i].marks[a]<<" ";
	}
}
return 0;
}


