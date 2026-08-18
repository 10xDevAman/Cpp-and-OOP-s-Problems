// Write a C++ program to find the maximum of two numbers.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Maximum = " << a << endl;
    else
        cout << "Maximum = " << b << endl;

    return 0;
}