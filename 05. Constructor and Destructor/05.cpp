// Define a class Complex with instance variables for real and imaginary part of a complex number. Define only one parameterized constructor in the class to initialize complex object. Also define showData method in the class to display object data. Now create an array of Complex class with size 5 and display values of each object.


#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Display complex number
    void showData() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {

    // Array of 5 Complex objects
    Complex arr[5] = {
        Complex(2, 3),
        Complex(4, 5),
        Complex(6, 7),
        Complex(8, 9),
        Complex(10, 11)
    };

    // Display values of each object
    for (int i = 0; i < 5; i++) {
        arr[i].showData();
    }

    return 0;
}