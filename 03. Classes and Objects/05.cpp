// Define a class Circle with radius as its property. Provide setRadius() and getRadius() methods. Also define methods to return area and circumference of circle.


#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    // Set radius
    void setRadius(float r) {
        radius = r;
    }

    // Get radius
    float getRadius() {
        return radius;
    }

    // Calculate area
    float getArea() {
        return 3.14 * radius * radius;
    }

    // Calculate circumference
    float getCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c;

    c.setRadius(5);

    cout << "Radius = " << c.getRadius() << endl;
    cout << "Area = " << c.getArea() << endl;
    cout << "Circumference = " << c.getCircumference() << endl;

    return 0;
}