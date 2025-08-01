#include<iostream>
using namespace std;

class PersonalInfo {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class JobInfo {
public:
    string designation;
    void getDesignation() {
        cout << "Enter designation: ";
        cin >> designation;
    }
};

class Employee : public PersonalInfo, public JobInfo {
public:
    void showEmployee() {
        cout << "Name: " << name << ", Designation: " << designation << endl;
    }
};

int main() {
    Employee e;
    e.getName();
    e.getDesignation();
    e.showEmployee();
    return 0;
}