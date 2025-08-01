#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is class A." << endl;
    }
};

class B {
public:
    void showB() {
        cout << "This is class B." << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "This is class C." << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}