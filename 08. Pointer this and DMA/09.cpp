// In question-8, define methods to convert string into uppercase, lowercase.


#include <iostream>
#include <cstring>
#include <cctype>
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

    // Create dynamic array and store string
    void setString(const char* str) {
        length = strlen(str);

        p = new char[length + 1];

        strcpy(p, str);
    }

    // Convert string into uppercase
    void toUpper() {
        for (int i = 0; i < length; i++) {
            p[i] = toupper(p[i]);
        }
    }

    // Convert string into lowercase
    void toLower() {
        for (int i = 0; i < length; i++) {
            p[i] = tolower(p[i]);
        }
    }

    // Display string
    void showString() {
        cout << p << endl;
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

    cout << "\nOriginal string: ";
    s.showString();

    s.toUpper();

    cout << "Uppercase string: ";
    s.showString();

    s.toLower();

    cout << "Lowercase string: ";
    s.showString();

    return 0;
}