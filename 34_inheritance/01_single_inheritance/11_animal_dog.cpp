#include<iostream>
using namespace std;

class Animal {
public:
    string species;

    void setSpecies(string s) {
        species = s;
    }

    void showSpecies() {
        cout << "Species: " << species << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    void setBreed(string b) {
        breed = b;
    }

    void showDog() {
        showSpecies();
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog d;
    d.setSpecies("Canine");
    d.setBreed("German Shepherd");
    d.showDog();
    return 0;
}