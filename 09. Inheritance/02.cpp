// Define a class Circle with radius as private instance variable and setRadius(), getRadius(), getArea() as public instance methods. Define a class ThickCircle as a subclass of Circle with thickness as private instance variable and getThickness(), setThickness() as public instance methods. Provide an overridden method getArea() to calculate area of thick portion of circle.


#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void setRadius(float radius) {
        this->radius = radius;
    }

    float getRadius() {
        return radius;
    }

    // Area of normal circle
    virtual float getArea() {
        return 3.14 * radius * radius;
    }
};

class ThickCircle : public Circle {
private:
    float thickness;

public:
    void setThickness(float thickness) {
        this->thickness = thickness;
    }

    float getThickness() {
        return thickness;
    }

    // Overridden getArea()
    float getArea() override {
        float outerRadius = getRadius() + thickness;

        return 3.14 * (
            outerRadius * outerRadius -
            getRadius() * getRadius()
        );
    }
};

int main() {
    ThickCircle tc;

    tc.setRadius(5);
    tc.setThickness(2);

    cout << "Radius: " << tc.getRadius() << endl;
    cout << "Thickness: " << tc.getThickness() << endl;

    cout << "Area of thick portion: "
         << tc.getArea() << endl;

    return 0;
}