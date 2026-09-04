// Define a class String with char pointer and length of the string as instance member variables. Define a method to dynamically create an array of char type and hold the input string in such a way that the array length is just enough to accommodate the input string.


#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* p;
    int length;

public:
    String() {
        p = nullptr;
        length = 0;
    }

    // Method to dynamically create char array
    void setString(const char* str) {

        // Find length of input string
        length = strlen(str);

        // Allocate exact required memory
        p = new char[length + 1];

        // Copy string into dynamically allocated array
        strcpy(p, str);
    }

    // Display string
    void showString() {
        cout << "String: " << p << endl;
        cout << "Length: " << length << endl;
    }

    // Destructor
    ~String() {
        delete[] p;
    }
};

int main() {
    String s;

    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    s.setString(str);

    s.showString();

    return 0;
}