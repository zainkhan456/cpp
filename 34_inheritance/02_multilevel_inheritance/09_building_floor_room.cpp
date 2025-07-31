#include<iostream>
using namespace std;

class Building {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

class Floor : public Building {
public:
    int floorNo;
    void setFloor(int f) {
        floorNo = f;
    }
};

class Room : public Floor {
public:
    int roomNo;
    void setRoom(int r) {
        roomNo = r;
    }

    void showRoom() {
        cout << "Building: " << name << ", Floor: " << floorNo << ", Room: " << roomNo << endl;
    }
};

int main() {
    Room r;
    r.setName("Main Block");
    r.setFloor(2);
    r.setRoom(205);
    r.showRoom();
    return 0;
}