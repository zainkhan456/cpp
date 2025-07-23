#include<iostream>
using namespace std;
struct student_info{
	string stname;
	int submarks[6];
};
int main()
{
	student_info Ali = {"Muhammad Ali",{6,5,7,8,9,4}};
	cout<<"name: "<<Ali.stname<<endl;
	cout<<"marks: "<<endl;
	cout<<"marks of subject 1: "<<Ali.submarks[0]<<endl;
	cout<<"marks of subject 2: "<<Ali.submarks[1]<<endl;
	cout<<"marks of subject 3: "<<Ali.submarks[2]<<endl;
	cout<<"marks of subject 4: "<<Ali.submarks[3]<<endl;
	cout<<"marks of subject 5: "<<Ali.submarks[4]<<endl;
	cout<<"marks of subject 6: "<<Ali.submarks[5]<<endl;	
	return 0;	
}
