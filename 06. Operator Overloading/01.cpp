/* 
Define a class Complex with appropriate instance variables and member functions. Define following operators in the class:
    1. +
    2. -
    3. *
    4. ==
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

    // Overload + operator
    Complex operator+(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }

    // Overload - operator
    Complex operator-(Complex c) {
        Complex result;

        result.real = real - c.real;
        result.imaginary = imaginary - c.imaginary;

        return result;
    }

    // Overload * operator
    Complex operator*(Complex c) {
        Complex result;

        result.real = (real * c.real) - (imaginary * c.imaginary);
        result.imaginary = (real * c.imaginary) +
                           (imaginary * c.real);

        return result;
    }

    // Overload == operator
    bool operator==(Complex c) {
        return real == c.real &&
               imaginary == c.imaginary;
    }

    // Display complex number
    void showData() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

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

    // Comparison
    if (c1 == c2)
        cout << "Both Complex Numbers are equal." << endl;
    else
        cout << "Both Complex Numbers are not equal." << endl;

    return 0;
}