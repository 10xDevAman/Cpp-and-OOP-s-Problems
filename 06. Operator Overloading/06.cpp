/*
Define a C++ class fraction
    class Fraction
    {
        long numerator;
        long denominator;
        public:
            fraction (long n=0, long d=0);
    }
Define an operator + to add two fraction object.
*/


#include <iostream>
using namespace std;

class Fraction {
private:
    long numerator;
    long denominator;

public:
    // Constructor
    Fraction(long n = 0, long d = 1) {
        numerator = n;
        denominator = d;
    }

    // Overload + operator
    Fraction operator+(Fraction f) {
        Fraction result;

        result.numerator =
            (numerator * f.denominator) +
            (f.numerator * denominator);

        result.denominator =
            denominator * f.denominator;

        return result;
    }

    // Display fraction
    void showData() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(2, 3);
    Fraction f2(4, 5);

    cout << "First Fraction: ";
    f1.showData();

    cout << "Second Fraction: ";
    f2.showData();

    Fraction f3 = f1 + f2;

    cout << "Addition: ";
    f3.showData();

    return 0;
}