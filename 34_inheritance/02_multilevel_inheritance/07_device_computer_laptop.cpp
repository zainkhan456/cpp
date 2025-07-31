#include<iostream>
using namespace std;

class Device {
public:
    string type;
    void setType(string t) {
        type = t;
    }
};

class Computer : public Device {
public:
    string cpu;
    void setCPU(string c) {
        cpu = c;
    }
};

class Laptop : public Computer {
public:
    float weight;
    void setWeight(float w) {
        weight = w;
    }

    void display() {
        cout << "Type: " << type << ", CPU: " << cpu << ", Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Laptop l;
    l.setType("Portable");
    l.setCPU("i7");
    l.setWeight(1.8);
    l.display();
    return 0;
}