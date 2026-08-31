// Define a class Integer with instance variable of type int. Provide a friend logical operator not!. Also define a friend operator == to compare two Integer objects. 


#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    // Constructor
    Integer(int v = 0) {
        value = v;
    }

    // Friend unary ! operator
    friend bool operator!(Integer);

    // Friend == operator
    friend bool operator==(Integer, Integer);
};


// Overload ! operator
bool operator!(Integer n) {
    return n.value == 0;
}


// Overload == operator
bool operator==(Integer n1, Integer n2) {
    return n1.value == n2.value;
}


int main() {

    Integer n1(10);
    Integer n2(10);
    Integer n3(0);

    // Test ! operator
    if (!n1)
        cout << "n1 is zero." << endl;
    else
        cout << "n1 is not zero." << endl;

    if (!n3)
        cout << "n3 is zero." << endl;
    else
        cout << "n3 is not zero." << endl;


    // Test == operator
    if (n1 == n2)
        cout << "n1 and n2 are equal." << endl;
    else
        cout << "n1 and n2 are not equal." << endl;

    return 0;
}