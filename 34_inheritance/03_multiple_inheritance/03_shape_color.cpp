#include<iostream>
using namespace std;

class Shape {
public:
    void setShape(string s) {
        shapeType = s;
    }
    void showShape() {
        cout << "Shape: " << shapeType << endl;
    }
protected:
    string shapeType;
};

class Color {
public:
    void setColor(string c) {
        colorName = c;
    }
    void showColor() {
        cout << "Color: " << colorName << endl;
    }
protected:
    string colorName;
};

class ColoredShape : public Shape, public Color {
public:
    void showDetails() {
        showShape();
        showColor();
    }
};

int main() {
    ColoredShape cs;
    cs.setShape("Circle");
    cs.setColor("Red");
    cs.showDetails();
    return 0;
}