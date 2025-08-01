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
    string dept;
    void setDept(string d) {
        dept = d;
    }

    void showManager() {
        cout << "Manager ID: " << id << ", Department: " << dept << endl;
    }
};

class Worker : public Employee {
public:
    string task;
    void setTask(string t) {
        task = t;
    }

    void showWorker() {
        cout << "Worker ID: " << id << ", Task: " << task << endl;
    }
};

int main() {
    Manager m;
    Worker w;
    m.setId(1001);
    m.setDept("HR");
    w.setId(1002);
    w.setTask("Packaging");
    m.showManager();
    w.showWorker();
    return 0;
}
