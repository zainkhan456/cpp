#include<iostream>
using namespace std;

class Human {
public:
    int age;
    void setAge(int a) {
        age = a;
    }
};

class Male : public Human {
public:
    void showMale() {
        cout << "Male Age: " << age << endl;
    }
};

class Female : public Human {
public:
    void showFemale() {
        cout << "Female Age: " << age << endl;
    }
};

int main() {
    Male m;
    Female f;
    m.setAge(30);
    f.setAge(28);
    m.showMale();
    f.showFemale();
    return 0;
}
