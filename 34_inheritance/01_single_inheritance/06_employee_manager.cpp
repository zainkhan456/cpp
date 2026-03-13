#include<iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    void setEmployeeData() {
        cout << "Enter Employee ID and Salary: ";
        cin >> id >> salary;
    }

    void showEmployeeData() {
        cout << "ID: " << id << ", Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void setManagerData() {
        cout << "Enter Department: ";
        cin >> department;
    }

    void showManagerData() {
        showEmployeeData();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.setEmployeeData();
    m.setManagerData();
    m.showManagerData();
    return 0;
}