#include<iostream>
using namespace std;

class Country {
public:
    string name;
    void setCountry(string n) {
        name = n;
    }
};

class State : public Country {
public:
    string stateName;
    void setState(string s) {
        stateName = s;
    }
};

class City : public State {
public:
    string cityName;
    void setCity(string c) {
        cityName = c;
    }

    void display() {
        cout << "Country: " << name << ", State: " << stateName << ", City: " << cityName << endl;
    }
};

int main() {
    City c;
    c.setCountry("Pakistan");
    c.setState("KPK");
    c.setCity("Peshawar");
    c.display();
    return 0;
}