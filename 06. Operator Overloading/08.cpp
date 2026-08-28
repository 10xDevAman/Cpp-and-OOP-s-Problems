/*
Consider a class Distance
    class Distance
    {
    int km, m, cm;
    public:
    //methods;

    };
Overload the operator+ to add two distance objects.
*/

#include <iostream>
using namespace std;

class Distance {
private:
    int km;
    int m;
    int cm;

public:
    // Constructor
    Distance(int k = 0, int meter = 0, int centimeter = 0) {
        km = k;
        m = meter;
        cm = centimeter;
    }

    // Overload + operator
    Distance operator+(Distance d) {
        Distance result;

        result.km = km + d.km;
        result.m = m + d.m;
        result.cm = cm + d.cm;

        // Convert centimetres into metres
        if (result.cm >= 100) {
            result.m += result.cm / 100;
            result.cm = result.cm % 100;
        }

        // Convert metres into kilometres
        if (result.m >= 1000) {
            result.km += result.m / 1000;
            result.m = result.m % 1000;
        }

        return result;
    }

    // Display distance
    void showData() {
        cout << km << " km "
             << m << " m "
             << cm << " cm" << endl;
    }
};

int main() {
    Distance d1(5, 750, 80);
    Distance d2(3, 400, 50);

    cout << "Distance 1: ";
    d1.showData();

    cout << "Distance 2: ";
    d2.showData();

    Distance d3 = d1 + d2;

    cout << "After Addition: ";
    d3.showData();

    return 0;
}