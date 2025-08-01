#include<iostream>
using namespace std;

class Shape {
public:
    string color;
    void setColor(string c) {
        color = c;
    }
};

class Circle : public Shape {
public:
    float radius;
    void setRadius(float r) {
        radius = r;
    }

    void showCircle() {
        cout << "Circle Color: " << color << ", Radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
public:
    float length, width;
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    void showRectangle() {
        cout << "Rectangle Color: " << color << ", Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    c.setColor("Red");
    c.setRadius(5.5);
    r.setColor("Blue");
    r.setDimensions(10, 5);
    c.showCircle();
    r.showRectangle();
    return 0;
}
