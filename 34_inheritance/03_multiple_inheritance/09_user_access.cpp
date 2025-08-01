#include<iostream>
using namespace std;

class User {
public:
    string username;
    void setUsername(string name) {
        username = name;
    }
};

class AccessLevel {
public:
    string level;
    void setLevel(string l) {
        level = l;
    }
};

class SystemUser : public User, public AccessLevel {
public:
    void showUser() {
        cout << "Username: " << username << ", Access Level: " << level << endl;
    }
};

int main() {
    SystemUser u;
    u.setUsername("zain123");
    u.setLevel("Admin");
    u.showUser();
    return 0;
}