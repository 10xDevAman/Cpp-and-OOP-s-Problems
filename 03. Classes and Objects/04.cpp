// In question 3, define a method to display date in the following pattern:
/*
    1.	31-12-2022
    2.	31-Dec-2022
*/



#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Format: 31-12-2022
    void displayDate1() {
        cout << day << "-" << month << "-" << year << endl;
    }

    // Format: 31-Dec-2022
    void displayDate2() {
        string months[] = {
            "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };

        cout << day << "-" << months[month] << "-" << year << endl;
    }
};

int main() {
    Date date;

    date.setDate(31, 12, 2022);

    date.displayDate1();
    date.displayDate2();

    return 0;
}