/*
Define a class Time with appropriate instance variables and member functions.
Overload following operators
    1. << insertion operator
    2. >> extraction operator
*/


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

    // Friend function for >> operator
    friend istream& operator>>(istream& in, Time& t);

    // Friend function for << operator
    friend ostream& operator<<(ostream& out, Time t);
};

// Overload extraction operator >>
istream& operator>>(istream& in, Time& t) {
    cout << "Enter hour, minute and second: ";
    in >> t.hour >> t.min >> t.sec;

    return in;
}

// Overload insertion operator <<
ostream& operator<<(ostream& out, Time t) {
    out << t.hour << ":" << t.min << ":" << t.sec;

    return out;
}

int main() {
    Time t;

    // Calls overloaded >> operator
    cin >> t;

    // Calls overloaded << operator
    cout << "Time = " << t << endl;

    return 0;
}