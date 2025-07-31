#include<iostream>
using namespace std;

class Employee {
public:
    int id;
    void setId(int i) {
        id = i;
    }
};

class Manager : public Employee {
public:
    string department;
    void setDepartment(string d) {
        department = d;
    }
};

class HRManager : public Manager {
public:
    string region;
    void setRegion(string r) {
        region = r;
    }

    void showInfo() {
        cout << "ID: " << id << ", Department: " << department << ", Region: " << region << endl;
    }
};

int main() {
    HRManager h;
    h.setId(101);
    h.setDepartment("HR");
    h.setRegion("North");
    h.showInfo();
    return 0;
}