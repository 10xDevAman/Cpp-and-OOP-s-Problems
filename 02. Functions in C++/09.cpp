// Write a function using function overloading to find a maximum of two numbers and both the numbers can be integer or real.


#include <iostream>
using namespace std;

// Maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Maximum of two real numbers
float max(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of 10 and 20 = " << max(10, 20) << endl;
    cout << "Maximum of 10.5 and 20.3 = " << max(10.5f, 20.3f) << endl;

    return 0;
}