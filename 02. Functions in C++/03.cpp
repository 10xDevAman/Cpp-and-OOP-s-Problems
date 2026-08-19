// Define a function to calculate c raised to the power y.

#include <iostream>
using namespace std;

int power(int c, int y) 
{
    int result = 1;

    for (int i = 1; i <= y; i++) {
        result = result * c;
    }

    return result;
}

int main() 
{
    int c, y;

    cout << "Enter base (c): ";
    cin >> c;

    cout << "Enter power (y): ";
    cin >> y;

    cout << c << " raised to the power " << y << " = "
         << power(c, y) << endl;

    return 0;
}