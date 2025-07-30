#include<iostream>
using namespace std;

class Vehicle {
public:
    string brand;

    void setBrand(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    string model;

    void setModel(string m) {
        model = m;
    }

    void showCarDetails() {
        showBrand();
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car c;
    c.setBrand("Toyota");
    c.setModel("Corolla");
    c.showCarDetails();
    return 0;
}