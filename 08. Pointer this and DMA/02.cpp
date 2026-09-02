// Define a class Complex with instance variables a and b to store real and imaginary part of a complex number. Provide setData() method with formal arguments with the name a and b, to set the values of instance variables. Also define showData() method to display instance member variable values.


#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;

public:
    // Set values of real and imaginary parts
    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // Display values
    void showData() {
        cout << "Real Part: " << a << endl;
        cout << "Imaginary Part: " << b << endl;
    }
};

int main() {
    Complex c;

    c.setData(10, 20);
    c.showData();

    return 0;
}