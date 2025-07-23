#include<iostream>
using namespace std;
struct stud_info{
	string name;
	int rollno;
	int regno;
};
int main()
{
	stud_info s1,s2;
	s1.name = "mudassir";
	s2.rollno = 8;
	s1.rollno = 5;
	s1.regno = 4564;
	s2.name = "zain";
	s2.regno = 6547;
	cout<<"s1 information: "<<endl;
	cout<<s1.name<<endl;
	cout<<s1.rollno<<endl;
	cout<<s1.regno<<endl;
	cout<<"\n\ns2 information: "<<endl;
	cout<<s2.name<<endl;
	cout<<s2.rollno<<endl;
	cout<<s2.regno<<endl;
	
}
