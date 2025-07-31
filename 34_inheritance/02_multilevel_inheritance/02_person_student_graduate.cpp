#include<iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

class Student : public Person {
public:
    int rollNo;
    void setRollNo(int r) {
        rollNo = r;
    }
};

class Graduate : public Student {
public:
    string degree;
    void setDegree(string d) {
        degree = d;
    }

    void showDetails() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Degree: " << degree << endl;
    }
};

int main() {
    Graduate g;
    g.setName("Zain");
    g.setRollNo(231);
    g.setDegree("BS Software Engineering");
    g.showDetails();
    return 0;
}