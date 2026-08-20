// Write functions using overloading to add two numbers having different data types.


#include <iostream>
using namespace std;

// Add two integers
int add(int a, int b) {
    return a + b;
}

// Add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Add an integer and a float
float add(int a, float b) {
    return a + b;
}

// Add a float and an integer
float add(float a, int b) {
    return a + b;
}

int main() {
    cout << "10 + 20 = " << add(10, 20) << endl;
    cout << "10.5 + 20.5 = " << add(10.5f, 20.5f) << endl;
    cout << "10 + 20.5 = " << add(10, 20.5f) << endl;
    cout << "10.5 + 20 = " << add(10.5f, 20) << endl;

    return 0;
}