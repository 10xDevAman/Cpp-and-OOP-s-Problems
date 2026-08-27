// In Question-2, overload pre-increment and post-increment operator to increment Time object value by one second.


#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int min;
    int second;

public:
    // Constructor
    Time(int h, int m, int s) {
        hour = h;
        min = m;
        second = s;
    }

    // Display time
    void showTime() {
        cout << hour << ":" << min << ":" << second << endl;
    }

    // Pre-increment operator (++t)
    Time operator++() {
        second++;

        if (second == 60) {
            second = 0;
            min++;
        }

        if (min == 60) {
            min = 0;
            hour++;
        }

        return *this;
    }

    // Post-increment operator (t++)
    Time operator++(int) {
        Time temp = *this;

        second++;

        if (second == 60) {
            second = 0;
            min++;
        }

        if (min == 60) {
            min = 0;
            hour++;
        }

        return temp;
    }
};

int main() {
    Time t(5, 30, 59);

    cout << "Original Time: ";
    t.showTime();

    // Pre-increment
    ++t;

    cout << "After Pre-Increment: ";
    t.showTime();

    // Post-increment
    t++;

    cout << "After Post-Increment: ";
    t.showTime();

    return 0;
}