#include<iostream>
using namespace std;

class Account {
public:
    int accNo;
    float balance;

    void setAccount(int no, float bal) {
        accNo = no;
        balance = bal;
    }

    void showAccount() {
        cout << "Account No: " << accNo << ", Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    float interestRate;

    void setInterest(float rate) {
        interestRate = rate;
    }

    void showSavingsAccount() {
        showAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount sa;
    sa.setAccount(1111, 7500.25);
    sa.setInterest(5.5);
    sa.showSavingsAccount();
    return 0;
}