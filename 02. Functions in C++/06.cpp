// Define a function to swap data of two int variables using call by reference.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}