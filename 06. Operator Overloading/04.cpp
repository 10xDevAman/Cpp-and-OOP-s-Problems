// In Question-2, overload operator+ to add two Time objects.


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

    // Overload + operator
    Time operator+(Time t) {
        Time result(0, 0, 0);

        result.second = second + t.second;
        result.min = min + t.min;
        result.hour = hour + t.hour;

        // Convert extra seconds into minutes
        if (result.second >= 60) {
            result.second -= 60;
            result.min++;
        }

        // Convert extra minutes into hours
        if (result.min >= 60) {
            result.min -= 60;
            result.hour++;
        }

        return result;
    }

    // Display Time
    void showTime() {
        cout << hour << ":" << min << ":" << second << endl;
    }
};

int main() {
    Time t1(5, 40, 30);
    Time t2(3, 30, 40);

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2: ";
    t2.showTime();

    Time t3 = t1 + t2;

    cout << "After Addition: ";
    t3.showTime();

    return 0;
}