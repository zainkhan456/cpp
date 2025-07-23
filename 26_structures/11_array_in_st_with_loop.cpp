#include<iostream>
using namespace std;
struct student_info{
	string stname;
	int submarks[6];
};
int main()
{
	student_info Ali;
	cout<<"enter the name of the student: ";
	getline(cin,Ali.stname);
	cout<<"enter marks of the 6 subjects: "<<endl;
	for(int i = 0 ; i < 6; i++)
		cin>>Ali.submarks[i];
	cout<<"name: "<<Ali.stname<<endl;
	cout<<"marks: "<<endl;
	for(int i = 0 ; i < 6; i++)
		cout<<"marks of subject "<<i+1<<": "<<Ali.submarks[i]<<endl;
	return 0;	
}


