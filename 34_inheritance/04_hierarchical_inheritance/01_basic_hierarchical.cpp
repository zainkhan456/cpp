#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is base class A." << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is derived class B." << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "This is derived class C." << endl;
    }
};

int main() {
    B objB;
    C objC;
    objB.showA();
    objB.showB();
    objC.showA();
    objC.showC();
    return 0;
}