// Define a class Date with d, m, y as instance variables. Initialise members using initialisers.


#include <iostream>
using namespace std;

class Date {
private:
    int d;
    int m;
    int y;

public:
    // Constructor using initializer list
    Date(int day, int month, int year)
        : d(day), m(month), y(year) {
    }

    // Display date
    void showDate() {
        cout << d << "-" << m << "-" << y << endl;
    }
};

int main() {
    Date date(31, 12, 2022);

    date.showDate();

    return 0;
}