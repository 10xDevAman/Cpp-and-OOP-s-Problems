// In Question-8, define operator pre decrement and post decrement to decrease distance by 1 cm.


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

    // Display distance
    void showData() {
        cout << km << " km "
             << m << " m "
             << cm << " cm" << endl;
    }

    // Pre-decrement operator (--d)
    Distance operator--() {

        // Decrease by 1 cm
        if (cm > 0) {
            cm--;
        }
        else {
            cm = 99;

            if (m > 0) {
                m--;
            }
            else {
                m = 999;
                km--;
            }
        }

        return *this;
    }

    // Post-decrement operator (d--)
    Distance operator--(int) {

        // Store old value
        Distance temp = *this;

        // Decrease by 1 cm
        if (cm > 0) {
            cm--;
        }
        else {
            cm = 99;

            if (m > 0) {
                m--;
            }
            else {
                m = 999;
                km--;
            }
        }

        // Return old value
        return temp;
    }
};

int main() {

    Distance d(5, 0, 0);

    cout << "Original Distance: ";
    d.showData();

    // Pre-decrement
    --d;

    cout << "After Pre-Decrement: ";
    d.showData();

    // Post-decrement
    d--;

    cout << "After Post-Decrement: ";
    d.showData();

    return 0;
}