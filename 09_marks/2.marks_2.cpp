#include<iostream>
using namespace std;
int main()
{
	float phy,chem,bio,eng,urdu,isl,ps,obtained_marks,average_marks,percentage_marks,total_marks;
	cout<<"enter the marks of the seven subjects: \n";
	cin>>phy>>chem>>bio>>eng>>urdu>>isl>>ps;
	cout<<"enter the total marks: "<<endl;
	cin>>total_marks;
	obtained_marks = phy + chem + bio + eng + urdu + +isl + ps;
	average_marks = obtained_marks/7;
	percentage_marks = (obtained_marks/total_marks)*100;
	cout<<"obtained marks = "<<obtained_marks<<endl;
	cout<<"average_marks = "<<average_marks<<endl;
	cout<<"percentage marks = "<<percentage_marks;
	return 0;
}
