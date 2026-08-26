// Define Circle class with radius as instance variable. Define two constructors in the class -non parameterised and parameterized.


#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    // Non-parameterized constructor
    Circle() {
        radius = 0;
    }

    // Parameterized constructor
    Circle(float r) {
        radius = r;
    }

    // Display radius
    void showRadius() {
        cout << "Radius = " << radius << endl;
    }
};

int main() {
    // Calls non-parameterized constructor
    Circle c1;

    cout << "Circle 1:" << endl;
    c1.showRadius();

    cout << endl;

    // Calls parameterized constructor
    Circle c2(5.5);

    cout << "Circle 2:" << endl;
    c2.showRadius();

    return 0;
}