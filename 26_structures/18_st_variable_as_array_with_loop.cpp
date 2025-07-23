//practice more after exam
#include<iostream>
#include<string>
#include<limits>
using namespace std;

struct stud_info {
    string name;
    int rollno;
    int marks[5];
};

int main() {
    stud_info students[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter the student " << i+1 << " info (name, rollno, marks of 5 subjects): " << endl;
        cout << "Enter the name: ";
        getline(cin, students[i].name);
        cout << "Enter roll no: ";
        while (!(cin >> students[i].rollno)) {
            cout << "Invalid input. Please enter an integer for roll no: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter marks: ";
        for(int a = 0; a < 5; a++) {
            while (!(cin >> students[i].marks[a])) {
                cout << "Invalid input. Please enter an integer for mark " << a+1 << ": ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for(int i = 0; i < 3; i++) {
        cout << "Name of student " << i+1 << ": " << students[i].name << endl;
        cout << "Roll no of student " << i+1 << ": " << students[i].rollno << endl;
        cout << "Marks of student " << i+1 << ": ";
        for(int a = 0; a < 5; a++) {
            cout << students[i].marks[a] << " ";
        }
        cout << endl;
    }
    return 0;
}

