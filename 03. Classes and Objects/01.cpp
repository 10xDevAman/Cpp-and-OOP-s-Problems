// Define a class complex to represent a complex number. Declare instance member variables to store a real and imaginary part of a complex number and print values of complex number.


#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    void setData(int r, int i) {
        real = r;
        imaginary = i;
    }

    void printData() {
        cout << "Complex Number = " << real << " + "
             << imaginary << "i" << endl;
    }
};

int main() {
    Complex c;

    c.setData(5, 3);
    c.printData();

    return 0;
}