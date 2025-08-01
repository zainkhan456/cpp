#include<iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

class Doctor : public Person {
public:
    string specialization;
    void setSpecialization(string s) {
        specialization = s;
    }

    void showDoctor() {
        cout << "Doctor: " << name << ", Specialization: " << specialization << endl;
    }
};

class Engineer : public Person {
public:
    string field;
    void setField(string f) {
        field = f;
    }

    void showEngineer() {
        cout << "Engineer: " << name << ", Field: " << field << endl;
    }
};

int main() {
    Doctor d;
    Engineer e;
    d.setName("Dr. Zain");
    d.setSpecialization("Cardiology");
    e.setName("Zain");
    e.setField("Software");
    d.showDoctor();
    e.showEngineer();
    return 0;
}
