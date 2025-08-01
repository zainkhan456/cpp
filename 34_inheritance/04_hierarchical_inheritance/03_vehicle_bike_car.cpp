#include<iostream>
using namespace std;
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};
class Teacher : public Person {
public:
    string subject;
    void setSubject(string s) {
        subject = s;
    }

    void showTeacher() {
        cout << "Teacher: " << name << ", Subject: " << subject << endl;
    }
};
class Student : public Person {
public:
    int rollNo;
    void setRollNo(int r) {
        rollNo = r;
    }

    void showStudent() {
        cout << "Student: " << name << ", Roll No: " << rollNo << endl;
    }
};
int main() {
    Teacher t;
    Student s;
    t.setName("Sir Ali");
    t.setSubject("Math");
    s.setName("Zain");
    s.setRollNo(23);
    t.showTeacher();
    s.showStudent();
    return 0;
}
