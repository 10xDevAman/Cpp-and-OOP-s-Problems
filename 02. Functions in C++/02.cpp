// Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;

int highestDigit(int n) 
{
    int highest = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit > highest)
            highest = digit;

        n = n / 10;
    }

    return highest;
}

int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Highest digit = " << highestDigit(num) << endl;

    return 0;
}