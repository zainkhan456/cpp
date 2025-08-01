#include<iostream>
using namespace std;

class Bank {
public:
    string bankName;
    void setBank(string name) {
        bankName = name;
    }
};

class Customer : public Bank {
public:
    string customerName;
    void setCustomer(string cname) {
        customerName = cname;
    }

    void showCustomer() {
        cout << "Customer: " << customerName << ", Bank: " << bankName << endl;
    }
};

class Employee : public Bank {
public:
    string empName;
    void setEmployee(string ename) {
        empName = ename;
    }

    void showEmployee() {
        cout << "Employee: " << empName << ", Bank: " << bankName << endl;
    }
};

int main() {
    Customer c;
    Employee e;
    c.setBank("HBL");
    c.setCustomer("Ali");
    e.setBank("HBL");
    e.setEmployee("Zain");
    c.showCustomer();
    e.showEmployee();
    return 0;
}
