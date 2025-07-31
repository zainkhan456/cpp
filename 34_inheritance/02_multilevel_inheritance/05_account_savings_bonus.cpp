#include<iostream>
using namespace std;

class Account {
public:
    int accNo;
    void setAccount(int a) {
        accNo = a;
    }
};

class Savings : public Account {
public:
    float interestRate;
    void setInterest(float i) {
        interestRate = i;
    }
};

class BonusSavings : public Savings {
public:
    float bonus;
    void setBonus(float b) {
        bonus = b;
    }

    void showDetails() {
        cout << "Account No: " << accNo << ", Interest Rate: " << interestRate << "%, Bonus: $" << bonus << endl;
    }
};

int main() {
    BonusSavings bs;
    bs.setAccount(12345);
    bs.setInterest(5.5);
    bs.setBonus(100.0);
    bs.showDetails();
    return 0;
}