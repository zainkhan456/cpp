#include<iostream>
#include<string>
using namespace std;
class person{
	private:
		string name;
	public:
		//constructor
	person(string n){
		name = n;
		}
		//normal funtion
	string getname(){
			return name;
		}
		//destructor
	~person(){
		cout<<"parent class destructor"<<endl;
	}
};
class student : public person{
	private:
		int rollno;
	public:
		//constructor
	student(int r,string n):person(n){
		rollno = r;
	}
		//normal function
	int getrollno(){
		return rollno;
	}
	    //destructor
	~student(){
		cout<<"child class destructor"<<endl;
	}
};
int main(){
	string name;
	int rollno;
	cout<<"enter the name of the student: ";
	getline(cin,name);
	cout<<"enter the roll no of the student: ";
	cin>>rollno;
	student s1(rollno,name);
	cout<<"student details: "<<endl;
	cout<<s1.getname()<<endl;
	cout<<s1.getrollno()<<endl;
	return 0;
}
