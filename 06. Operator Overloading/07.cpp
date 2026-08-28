// In Question-6, define an operator < to compare two fraction objects.


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

    // Overload < operator
    bool operator<(Fraction f) {
        return numerator * f.denominator <
               f.numerator * denominator;
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

    if (f1 < f2)
        cout << "First fraction is smaller." << endl;
    else
        cout << "First fraction is not smaller." << endl;

    return 0;
}