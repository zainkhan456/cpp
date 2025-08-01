#include<iostream>
using namespace std;

class Machine {
public:
    string machineType;
    void setMachine(string type) {
        machineType = type;
    }
};

class Operator {
public:
    string operatorName;
    void setOperator(string name) {
        operatorName = name;
    }
};

class Factory : public Machine, public Operator {
public:
    void showFactoryDetails() {
        cout << "Machine: " << machineType << ", Operator: " << operatorName << endl;
    }
};

int main() {
    Factory f;
    f.setMachine("Drill");
    f.setOperator("Ali");
    f.showFactoryDetails();
    return 0;
}