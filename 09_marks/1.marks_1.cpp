#include<iostream>
using namespace std;
int main()
{
	int subject_1,subject_2,subject_3,subject_4;
	float obtained_marks,average_marks;
	cout<<"Enter the marks obtained in the four subjects: "<<endl;
	cin>>subject_1>>subject_2>>subject_3>>subject_4;
	obtained_marks = subject_1 + subject_2 + subject_3 + subject_4;
	average_marks = (obtained_marks/400) * 100;
	cout<<"The total marks of the student is "<<obtained_marks<<endl;
	cout<<"The average marks of the student is "<<average_marks;
	return 0;
}
