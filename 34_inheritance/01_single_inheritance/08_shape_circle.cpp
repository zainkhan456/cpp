#include<iostream>
using namespace std;

class Shape {
public:
    string color;

    void setColor(string c) {
        color = c;
    }

    void showColor() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
public:
    float radius;

    void setRadius(float r) {
        radius = r;
    }

    void showCircle() {
        showColor();
        cout << "Radius: " << radius << endl;
    }
};

int main() {
    Circle c;
    c.setColor("Blue");
    c.setRadius(4.5);
    c.showCircle();
    return 0;
}