#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentData() {
        showPersonData();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getPersonData();
    s.getStudentData();
    s.showStudentData();
    return 0;
}