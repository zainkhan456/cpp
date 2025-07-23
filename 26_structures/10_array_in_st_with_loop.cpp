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
	for(int i = 0 ; i < 6; i++)
	cout<<"marks of subject "<<i+1<<": "<<Ali.submarks[i]<<endl;
	return 0;	
}
