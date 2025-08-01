#include<iostream>
using namespace std;

class Device {
public:
    string brand;
    void setBrand(string b) {
        brand = b;
    }
};

class Laptop : public Device {
public:
    float weight;
    void setWeight(float w) {
        weight = w;
    }

    void showLaptop() {
        cout << "Laptop Brand: " << brand << ", Weight: " << weight << " kg" << endl;
    }
};

class Desktop : public Device {
public:
    string processor;
    void setProcessor(string p) {
        processor = p;
    }

    void showDesktop() {
        cout << "Desktop Brand: " << brand << ", Processor: " << processor << endl;
    }
};

int main() {
    Laptop l;
    Desktop d;
    l.setBrand("Dell");
    l.setWeight(2.1);
    d.setBrand("HP");
    d.setProcessor("i7");
    l.showLaptop();
    d.showDesktop();
    return 0;
}
