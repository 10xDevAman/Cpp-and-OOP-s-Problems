// Create a Coordinate class with 2 instance variables x and y. Overload comma operator such that when you write c3 = (c1, c2 ) then c2 is assigned to c3. Where c1, c2,and c3 are objects of 3D coordinate class.


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

    // Display coordinate
    void showData() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    Coordinate c1(10, 20);
    Coordinate c2(30, 40);
    Coordinate c3;

    cout << "c1 = ";
    c1.showData();

    cout << "c2 = ";
    c2.showData();

    // Comma operator
    c3 = (c1, c2);

    cout << "c3 = ";
    c3.showData();

    return 0;
}