// In Question-8, provide overloaded insertion and extraction operators.


#include <iostream>
using namespace std;

class Coordinate {
private:
    int x;
    int y;

public:
    // Constructor
    Coordinate(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Overload comma operator
    Coordinate operator,(Coordinate c) {
        return c;
    }

    // Friend extraction operator >>
    friend istream& operator>>(istream& in, Coordinate& c);

    // Friend insertion operator <<
    friend ostream& operator<<(ostream& out, Coordinate c);
};


// Overload >> operator
istream& operator>>(istream& in, Coordinate& c) {
    cout << "Enter x and y: ";
    in >> c.x >> c.y;

    return in;
}


// Overload << operator
ostream& operator<<(ostream& out, Coordinate c) {
    out << "(" << c.x << ", " << c.y << ")";

    return out;
}


int main() {
    Coordinate c1, c2, c3;

    // Input using >>
    cout << "Enter first coordinate:" << endl;
    cin >> c1;

    cout << "Enter second coordinate:" << endl;
    cin >> c2;

    // Comma operator
    c3 = (c1, c2);

    // Output using <<
    cout << "\nCoordinate 1: " << c1 << endl;
    cout << "Coordinate 2: " << c2 << endl;
    cout << "Coordinate 3: " << c3 << endl;

    return 0;
}