// Define a class Coordinate with x and y as instance variables. Define overloaded versions of getDistance(), first with no argument calculating distance from origin, and second with one argument of Coordinate type to calculate distance between two coordinates. Also define other methods if required.


#include <iostream>
#include <cmath>
using namespace std;

class Coordinate {
private:
    int x;
    int y;

public:
    // Setter
    void setCoordinate(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Getter for x
    int getX() {
        return x;
    }

    // Getter for y
    int getY() {
        return y;
    }

    // Distance from origin
    double getDistance() {
        return sqrt(x * x + y * y);
    }

    // Distance between two coordinates
    double getDistance(Coordinate c) {
        int dx = x - c.x;
        int dy = y - c.y;

        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    Coordinate c1, c2;

    c1.setCoordinate(3, 4);
    c2.setCoordinate(6, 8);

    // Distance of c1 from origin
    cout << "Distance of c1 from origin: "
         << c1.getDistance() << endl;

    // Distance between c1 and c2
    cout << "Distance between c1 and c2: "
         << c1.getDistance(c2) << endl;

    return 0;
}