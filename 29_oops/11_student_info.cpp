#include<iostream>
using namespace std;

class student {
    int rollno;
    int regno;
public:
    void setrollno(int r) {
        rollno = r;
    }
    int getrollno() {
        return rollno;
    }
    void setregno(int reg) {
        regno = reg;
    }
    int getregno() {
        return regno;
    }
};

int main() {
    student s1, s2;
    s1.setrollno(1);
    s1.setregno(101);

    s2.setrollno(2);
    s2.setregno(102);

    cout << "Student 1 - Roll No: " << s1.getrollno() << ", Registration No: " << s1.getregno() << endl;
    cout << "Student 2 - Roll No: " << s2.getrollno() << ", Registration No: " << s2.getregno() << endl;

    return 0;
}

