#include<iostream>
using namespace std;

class Department {
public:
    string deptName;

    void setDept(string name) {
        deptName = name;
    }

    void showDept() {
        cout << "Department: " << deptName << endl;
    }
};

class Teacher : public Department {
public:
    string teacherName;

    void setTeacher(string tName) {
        teacherName = tName;
    }

    void showTeacher() {
        showDept();
        cout << "Teacher: " << teacherName << endl;
    }
};

int main() {
    Teacher t;
    t.setDept("Computer Science");
    t.setTeacher("Dr. Zain");
    t.showTeacher();
    return 0;
}