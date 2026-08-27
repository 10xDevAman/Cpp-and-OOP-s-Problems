// Create a class Time which contains hour, min and second as fields. Overload greater than (>) operator to compare two time objects.

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

    // Overload > operator
    bool operator>(Time t) {
        if (hour > t.hour)
            return true;

        if (hour < t.hour)
            return false;

        // Hours are equal
        if (min > t.min)
            return true;

        if (min < t.min)
            return false;

        // Hours and minutes are equal
        return second > t.second;
    }

    // Display time
    void showTime() {
        cout << hour << ":" << min << ":" << second << endl;
    }
};

int main() {
    Time t1(5, 30, 20);
    Time t2(4, 45, 50);

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2: ";
    t2.showTime();

    if (t1 > t2)
        cout << "Time 1 is greater than Time 2." << endl;
    else
        cout << "Time 1 is not greater than Time 2." << endl;

    return 0;
}