#include<iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    void setBrand(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
public:
    string model;
    void setModel(string m) {
        model = m;
    }
};

class SportsCar : public Car {
public:
    int topSpeed;
    void setTopSpeed(int s) {
        topSpeed = s;
    }

    void showCar() {
        cout << "Brand: " << brand << ", Model: " << model << ", Top Speed: " << topSpeed << " km/h" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.setBrand("Ferrari");
    sc.setModel("F8");
    sc.setTopSpeed(340);
    sc.showCar();
    return 0;
}