#include<iostream>
using namespace std;

class Author {
public:
    string authorName;
    void setAuthor(string name) {
        authorName = name;
    }
};

class Publisher {
public:
    string publisherName;
    void setPublisher(string name) {
        publisherName = name;
    }
};

class Book : public Author, public Publisher {
public:
    void showBookDetails() {
        cout << "Author: " << authorName << ", Publisher: " << publisherName << endl;
    }
};

int main() {
    Book b;
    b.setAuthor("Zain");
    b.setPublisher("TechBooks");
    b.showBookDetails();
    return 0;
}