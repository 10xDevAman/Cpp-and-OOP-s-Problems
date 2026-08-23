// Define a class Cuboid with length, breadth and height as instance member variables. Define constructors to initialise member variables.


#include <iostream>
using namespace std;

class Cuboid {
private:
    int length;
    int breadth;
    int height;

public:
    // Constructor
    Cuboid(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void showData() {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
    }
};

int main() {
    Cuboid c(10, 5, 4);

    c.showData();

    return 0;
}