#include<iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Department {
public:
    string dept;
    void getDept() {
        cout << "Enter department: ";
        cin >> dept;
    }
};

class Teacher : public Person, public Department {
public:
    void showDetails() {
        cout << "Name: " << name << ", Department: " << dept << endl;
    }
};

int main() {
    Teacher t;
    t.getName();
    t.getDept();
    t.showDetails();
    return 0;
}