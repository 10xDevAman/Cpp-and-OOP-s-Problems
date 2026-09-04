// In question-8, define methods to print string, return string, return length of string.


#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* p;
    int length;

public:
    // Constructor
    String() {
        p = nullptr;
        length = 0;
    }

    // Dynamically create character array
    void setString(const char* str) {
        length = strlen(str);

        p = new char[length + 1];

        strcpy(p, str);
    }

    // Print string
    void printString() {
        cout << p << endl;
    }

    // Return string
    const char* getString() {
        return p;
    }

    // Return length of string
    int getLength() {
        return length;
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

    cout << "\nString: ";
    s.printString();

    cout << "Returned String: " << s.getString() << endl;

    cout << "Length: " << s.getLength() << endl;

    return 0;
}