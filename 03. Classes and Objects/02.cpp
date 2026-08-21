// Define a class Time to represent Time (like 3 hr 45 min 20 sec ). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.


#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to set time
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time
    void displayTime() {
        cout << hours << " hr "
             << minutes << " min "
             << seconds << " sec" << endl;
    }
};

int main() {
    Time t;

    t.setTime(3, 45, 20);
    t.displayTime();

    return 0;
}