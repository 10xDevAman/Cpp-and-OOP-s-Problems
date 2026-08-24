// Define a class Book with bookid, title and price as instance member variables. Define non parameterized and parameterized constructor in the class.


#include <iostream>
using namespace std;

class Book {
private:
    int bookid;
    string title;
    float price;

public:
    // Non-parameterized constructor
    Book() {
        bookid = 0;
        title = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Book(int id, string t, float p) {
        bookid = id;
        title = t;
        price = p;
    }

    // Display book details
    void display() {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Non-parameterized constructor
    Book b1;

    cout << "Book 1:" << endl;
    b1.display();

    cout << endl;

    // Parameterized constructor
    Book b2(101, "C++ Programming", 499.50);

    cout << "Book 2:" << endl;
    b2.display();

    return 0;
}