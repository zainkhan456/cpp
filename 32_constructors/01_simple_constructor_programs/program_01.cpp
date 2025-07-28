#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		student(string n,int r)
		{
			name = n;
			rollno = r;
		}
		string getname(){
			return name;
		}
		int getrollno(){
			return rollno;
		}
};
int main(){
	student s1("zain",2);
	cout<<"name: "<<s1.getname()<<endl;
	cout<<"roll no: "<<s1.getrollno();
}
