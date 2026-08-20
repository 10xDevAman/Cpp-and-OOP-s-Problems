// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.


#include <iostream>
using namespace std;

// Area of Circle
float area(float radius) {
    return 3.14 * radius * radius;
}

// Area of Rectangle
int area(int length, int width) {
    return length * width;
}

// Area of Triangle
float area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle = " << area(5.0f) << endl;
    cout << "Area of Rectangle = " << area(10, 5) << endl;
    cout << "Area of Triangle = " << area(10.0f, 5.0f) << endl;

    return 0;
}