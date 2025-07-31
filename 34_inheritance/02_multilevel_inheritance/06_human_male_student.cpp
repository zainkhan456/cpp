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
    string gender = "Male";
};

class MaleStudent : public Male {
public:
    string course;
    void setCourse(string c) {
        course = c;
    }

    void display() {
        cout << "Age: " << age << ", Gender: " << gender << ", Course: " << course << endl;
    }
};

int main() {
    MaleStudent ms;
    ms.setAge(21);
    ms.setCourse("CS");
    ms.display();
    return 0;
}