// Write a C++ program to calculate the average of 3 numbers.


#include <iostream>
using namespace std;

int main() {
    float a, b, c, average;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    average = (a + b + c) / 3;

    cout << "Average = " << average << endl;

    return 0;
}