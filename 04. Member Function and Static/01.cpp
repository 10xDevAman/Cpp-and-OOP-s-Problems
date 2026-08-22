/*
Define a class complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions:-
    1.	void setData(int, int)
    2.	void showData()
    3.	Complex add(Complex)
    4.	Complex subtract(Complex)
    5.	Complex multiply(Complex)
*/

#include <iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    // Set real and imaginary parts
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    // Display complex number
    void showData() {
        cout << a << " + " << b << "i" << endl;
    }

    // Add two complex numbers
    Complex add(Complex c) {
        Complex result;

        result.a = a + c.a;
        result.b = b + c.b;

        return result;
    }

    // Subtract two complex numbers
    Complex subtract(Complex c) {
        Complex result;

        result.a = a - c.a;
        result.b = b - c.b;

        return result;
    }

    // Multiply two complex numbers
    Complex multiply(Complex c) {
        Complex result;

        result.a = (a * c.a) - (b * c.b);
        result.b = (a * c.b) + (b * c.a);

        return result;
    }
};

int main() {
    Complex c1, c2, result;

    c1.setData(4, 5);
    c2.setData(2, 3);

    cout << "First Complex Number: ";
    c1.showData();

    cout << "Second Complex Number: ";
    c2.showData();

    result = c1.add(c2);
    cout << "Addition: ";
    result.showData();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.showData();

    result = c1.multiply(c2);
    cout << "Multiplication: ";
    result.showData();

    return 0;
}