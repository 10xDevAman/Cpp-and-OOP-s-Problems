// In Question-2, over load operator= to perform copy of Time object.

#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int min;
    int sec;

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        min = m;
        sec = s;
    }

    // Overload assignment operator =
    Time& operator=(Time t) {
        hour = t.hour;
        min = t.min;
        sec = t.sec;

        return *this;
    }

    // Display Time
    void showTime() {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

int main() {
    Time t1(3, 45, 20);
    Time t2;

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2 before copying: ";
    t2.showTime();

    // Assignment operator
    t2 = t1;

    cout << "Time 2 after copying: ";
    t2.showTime();

    return 0;
}