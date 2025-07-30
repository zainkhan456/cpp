#include<iostream>
using namespace std;

class Book {
public:
    string title;

    void setTitle(string t) {
        title = t;
    }

    void showTitle() {
        cout << "Book Title: " << title << endl;
    }
};

class LibraryBook : public Book {
public:
    int shelfNo;

    void setShelf(int no) {
        shelfNo = no;
    }

    void showLibraryBook() {
        showTitle();
        cout << "Shelf Number: " << shelfNo << endl;
    }
};

int main() {
    LibraryBook lb;
    lb.setTitle("C++ Programming");
    lb.setShelf(42);
    lb.showLibraryBook();
    return 0;
}