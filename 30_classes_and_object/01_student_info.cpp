#include<iostream>
#include<string>
using namespace std;
class student{
	private:
	string name;
	int rollno;
	public:
		void setname();
		void setrollno();
		string getname();
		int getrollno();
};
void student::setname(){
	cout<<"enter the name of the student: "<<endl;
	getline(cin,name);
}
void student::setrollno(){
	cout<<"enter the roll no of the student: "<<endl;
	cin>>rollno;
	cin.ignore();
}
string student::getname(){
	return name;
}
int student::getrollno(){
	return rollno;
}
int main()
{
	student s1,s2;
	s1.setname();
	s1.setrollno();
	s2.setname();
	s2.setrollno();
	cout<<"name: "<<s1.getname()<<endl;
	cout<<"rollno: "<<s1.getrollno()<<endl;
	cout<<"name: "<<s2.getname()<<endl;
	cout<<"rollno: "<<s2.getrollno()<<endl;
    return 0;
}
