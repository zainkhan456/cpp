#include<iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    void getEmployeeData() {
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

    void getManagerData() {
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
    m.getEmployeeData();
    m.getManagerData();
    m.showManagerData();
    return 0;
}