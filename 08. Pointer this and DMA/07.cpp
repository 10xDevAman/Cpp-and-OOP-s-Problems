// In question-4, define a method to display Time object array values. Array is received through argument.


#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;

public:
    // Set time
    void setTime(int hr, int min, int sec) {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    // Display one Time object
    void showTime() {
        cout << hr << " hr "
             << min << " min "
             << sec << " sec" << endl;
    }
};

// Non-member function to display Time object array
void displayTimeArray(Time arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i].showTime();
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    // Dynamic array of Time objects
    Time* arr = new Time[n];

    // Initialize Time objects
    for (int i = 0; i < n; i++) {
        int hr, min, sec;

        cout << "Enter time " << i + 1 << ": ";
        cin >> hr >> min >> sec;

        arr[i].setTime(hr, min, sec);
    }

    cout << "\nTime object array:" << endl;

    // Pass array to function
    displayTimeArray(arr, n);

    // Free memory
    delete[] arr;

    return 0;
}