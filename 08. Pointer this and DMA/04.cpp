// Define a class Distance with instance variables hr, min and sec. Provide instance methods setTime() and showTime().setTime() method has formal arguments with the same name as instance variables. Also define setters and getters.


#include <iostream>
using namespace std;

class Distance {
private:
    int hr;
    int min;
    int sec;

public:
    // setTime() method
    void setTime(int hr, int min, int sec) {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    // showTime() method
    void showTime() {
        cout << "Time: " << hr << " hr "
             << min << " min "
             << sec << " sec" << endl;
    }

    // Setters
    void setHr(int hr) {
        this->hr = hr;
    }

    void setMin(int min) {
        this->min = min;
    }

    void setSec(int sec) {
        this->sec = sec;
    }

    // Getters
    int getHr() {
        return hr;
    }

    int getMin() {
        return min;
    }

    int getSec() {
        return sec;
    }
};

int main() {
    Distance d;

    // Set all values
    d.setTime(2, 30, 45);

    // Display time
    d.showTime();

    // Using setters
    d.setHr(3);
    d.setMin(15);
    d.setSec(20);

    cout << "\nAfter using setters:" << endl;
    d.showTime();

    // Using getters
    cout << "\nUsing getters:" << endl;
    cout << "Hours: " << d.getHr() << endl;
    cout << "Minutes: " << d.getMin() << endl;
    cout << "Seconds: " << d.getSec() << endl;

    return 0;
}