/*
Define a class Time to represent time with instance variables h,m and s to store hour, minute, and second. Also define following member functions
    1.	void setTime(int,int,int)
    2.	void showTime()
    3.	void normalize()
    4.	Time add(Time)
    5.	bool is_greater(Time)
*/

#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;

public:
    // 1. Set time
    void setTime(int hr, int min, int sec) {
        h = hr;
        m = min;
        s = sec;
    }

    // 2. Display time
    void showTime() {
        cout << h << " hr "
             << m << " min "
             << s << " sec" << endl;
    }

    // 3. Normalize time
    void normalize() {
        // Convert extra seconds into minutes
        m += s / 60;
        s = s % 60;

        // Convert extra minutes into hours
        h += m / 60;
        m = m % 60;
    }

    // 4. Add two Time objects
    Time add(Time t) {
        Time result;

        result.h = h + t.h;
        result.m = m + t.m;
        result.s = s + t.s;

        result.normalize();

        return result;
    }

    // 5. Check whether current time is greater
    bool is_greater(Time t) {
        if (h > t.h)
            return true;
        else if (h < t.h)
            return false;

        // Hours are equal, compare minutes
        if (m > t.m)
            return true;
        else if (m < t.m)
            return false;

        // Hours and minutes are equal, compare seconds
        return s > t.s;
    }
};

int main() {
    Time t1, t2, t3;

    t1.setTime(5, 70, 80);
    t2.setTime(2, 50, 40);

    cout << "Before Normalization: ";
    t1.showTime();

    t1.normalize();

    cout << "After Normalization: ";
    t1.showTime();

    t3 = t1.add(t2);

    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2: ";
    t2.showTime();

    cout << "Addition: ";
    t3.showTime();

    if (t1.is_greater(t2))
        cout << "Time 1 is greater than Time 2" << endl;
    else
        cout << "Time 1 is not greater than Time 2" << endl;

    return 0;
}