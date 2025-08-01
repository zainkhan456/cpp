#include<iostream>
using namespace std;

class Account {
public:
    int accNo;
    void setAccNo(int no) {
        accNo = no;
    }
};

class Savings : public Account {
public:
    float interestRate;
    void setInterest(float rate) {
        interestRate = rate;
    }

    void showSavings() {
        cout << "Savings Account No: " << accNo << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

class Current : public Account {
public:
    float overdraftLimit;
    void setLimit(float limit) {
        overdraftLimit = limit;
    }

    void showCurrent() {
        cout << "Current Account No: " << accNo << ", Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    Savings s;
    Current c;
    s.setAccNo(2001);
    s.setInterest(4.5);
    c.setAccNo(2002);
    c.setLimit(10000);
    s.showSavings();
    c.showCurrent();
    return 0;
}
