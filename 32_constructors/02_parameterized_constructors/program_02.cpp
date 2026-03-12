//Parameterized Constructor
#include<iostream>
using namespace std;
class StudentData{
	private:
		string name;
		int rollno;
	public:
		StudentData(string n,int r)
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
	StudentData s1("zain",2);
	cout<<"name: "<<s1.getname()<<endl;
	cout<<"roll no: "<<s1.getrollno();
}
