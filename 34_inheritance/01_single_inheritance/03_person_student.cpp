#include<iostream>
#include<string>
using namespace std;
class person{
	string name;
	protected:
		string address;
		void setname(string n)
		{
			name = n;
		}
	public:
		string getname()
		{
			return name;
		}
};
class student : public person{
	private:
		int rollno;
	public:
		void setrollno(int r)
		{
			rollno = r;
		}	
		int getrollno()
		{
			return rollno;
		}
		void setstname(string nm)
		{
			setname(nm);
		}
		void setaddress(string addr)
		{
			address = addr;
		}
		string getaddress()
		{
			return address;
		}
};
int main()
{
	student s1;
	string snm,saddr;
	int srollno;
	cout<<"enter the name of the student: ";
	getline(cin,snm);
	cout<<"enter the roll no of the student: ";
	cin>>srollno;
	cin.ignore();
	cout<<"enter the address of the student: ";
	getline(cin,saddr);
	s1.setstname(snm);
	s1.setrollno(srollno);
	s1.setaddress(saddr);
	cout<<"student details: "<<endl;
	cout<<s1.getname()<<endl;
	cout<<s1.getrollno()<<endl;
	cout<<s1.getaddress();
	return 0;
}
