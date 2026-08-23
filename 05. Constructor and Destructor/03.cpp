// Define a class Time with hr,min,sec as instance member variables. Define constructor to initialize time object.


#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;

public:
    // Parameterized Constructor
    Time(int h, int m, int s) {
        hr = h;
        min = m;
        sec = s;
    }

    // Display Time
    void showTime() {
        cout << hr << " hr "
             << min << " min "
             << sec << " sec" << endl;
    }
};

int main() {
    Time t(3, 45, 20);

    t.showTime();

    return 0;
}