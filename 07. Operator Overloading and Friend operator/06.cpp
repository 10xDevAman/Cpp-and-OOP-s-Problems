// In Question-1, provide a unary friend operator - to negate the real and imaginary part of a complex number.


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

    // Friend unary - operator
    friend Complex operator-(Complex);

    // Display complex number
    void showData() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};


// Definition of unary - operator
Complex operator-(Complex c) {
    Complex result;

    result.real = -c.real;
    result.imaginary = -c.imaginary;

    return result;
}


int main() {

    Complex c1(5, 7);

    cout << "Original Complex Number: ";
    c1.showData();

    // Unary minus
    Complex c2 = -c1;

    cout << "After Unary Minus: ";
    c2.showData();

    return 0;
}