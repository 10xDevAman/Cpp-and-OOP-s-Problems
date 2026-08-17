// Write a C++ program to calculate the volume of a cuboid.


#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    cout << "Enter length, width and height: ";
    cin >> length >> width >> height;

    volume = length * width * height;

    cout << "Volume of cuboid = " << volume << endl;

    return 0;
}