#include<iostream>
using namespace std;

class Bank {
public:
    string bankName;

    void setBank(string name) {
        bankName = name;
    }

    void showBank() {
        cout << "Bank: " << bankName << endl;
    }
};

class Customer : public Bank {
public:
    string customerName;

    void setCustomer(string cname) {
        customerName = cname;
    }

    void showCustomer() {
        showBank();
        cout << "Customer: " << customerName << endl;
    }
};

int main() {
    Customer c;
    c.setBank("Islamic Bank");
    c.setCustomer("Zain Ul Islam");
    c.showCustomer();
    return 0;
}