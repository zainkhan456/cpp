#include<iostream>
using namespace std;

class Academic {
public:
    int marks;
    void setMarks(int m) {
        marks = m;
    }
};

class Sports {
public:
    int score;
    void setScore(int s) {
        score = s;
    }
};

class Student : public Academic, public Sports {
public:
    void showResult() {
        cout << "Academic Marks: " << marks << ", Sports Score: " << score << endl;
    }
};

int main() {
    Student s;
    s.setMarks(85);
    s.setScore(90);
    s.showResult();
    return 0;
}