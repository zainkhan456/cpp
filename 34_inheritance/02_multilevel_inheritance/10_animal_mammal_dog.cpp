#include<iostream>
using namespace std;

class Animal {
public:
    string species;
    void setSpecies(string s) {
        species = s;
    }
};

class Mammal : public Animal {
public:
    bool warmBlooded = true;
};

class Dog : public Mammal {
public:
    string breed;
    void setBreed(string b) {
        breed = b;
    }

    void showDog() {
        cout << "Species: " << species << ", Warm Blooded: " << warmBlooded << ", Breed: " << breed << endl;
    }
};

int main() {
    Dog d;
    d.setSpecies("Canine");
    d.setBreed("Labrador");
    d.showDog();
    return 0;
}