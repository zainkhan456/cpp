#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int rollno;
	public:
		void setname(){
			cout<<"enter the name of the student: ";
			getline(cin,name);
		}
		void setrollno(){
			cout<<"enter the roll no of the student: ";
			cin>>rollno;
			cin.ignore();//if we take the second object
		}
		void getname(){
			cout<<name<<endl;
			
		}
			void getrollno(){
			cout<<rollno;
		
		}
		
};
int main()
{
	student s1;
	s1.setname();
	s1.setrollno();
	s1.getname();
	s1.getrollno();
return 0;
}


