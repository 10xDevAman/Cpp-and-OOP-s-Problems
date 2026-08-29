/*
Define a class Complex and overload following operators as a friend.
    1.	+
    2.	-
    3.	*
*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    // Friend functions
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator*(Complex, Complex);

    // Display complex number
    void showData() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

// Overload + operator
Complex operator+(Complex c1, Complex c2) {
    Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

// Overload - operator
Complex operator-(Complex c1, Complex c2) {
    Complex result;

    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;

    return result;
}

// Overload * operator
Complex operator*(Complex c1, Complex c2) {
    Complex result;

    result.real =
        (c1.real * c2.real) -
        (c1.imaginary * c2.imaginary);

    result.imaginary =
        (c1.real * c2.imaginary) +
        (c1.imaginary * c2.real);

    return result;
}

int main() {
    Complex c1(4, 5);
    Complex c2(2, 3);
    Complex result;

    cout << "First Complex Number: ";
    c1.showData();

    cout << "Second Complex Number: ";
    c2.showData();

    // Addition
    result = c1 + c2;
    cout << "\nAddition: ";
    result.showData();

    // Subtraction
    result = c1 - c2;
    cout << "Subtraction: ";
    result.showData();

    // Multiplication
    result = c1 * c2;
    cout << "Multiplication: ";
    result.showData();

    return 0;
}