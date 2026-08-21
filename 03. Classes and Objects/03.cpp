// Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.


#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Function to set date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to display date
    void displayDate() {
        cout << "Date = " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;

    date.setDate(31, 12, 2022);
    date.displayDate();

    return 0;
}