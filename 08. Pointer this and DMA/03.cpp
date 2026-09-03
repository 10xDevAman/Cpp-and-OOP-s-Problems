// In question-2, write a non member function in which instantiate Complex class dynamically. Initialize instance variables and display their values.


#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;

public:
    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void showData() {
        cout << "Real Part: " << a << endl;
        cout << "Imaginary Part: " << b << endl;
    }
};

// Non-member function
void displayComplex() {
    // Dynamic object creation
    Complex *p = new Complex;

    // Initialize instance variables
    p->setData(10, 20);

    // Display values
    p->showData();

    // Free dynamically allocated memory
    delete p;
}

int main() {
    displayComplex();

    return 0;
}