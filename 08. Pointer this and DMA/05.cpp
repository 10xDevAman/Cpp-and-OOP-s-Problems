// In question-4, define a method to dynamically create an array of Time objects with specified size (received through argument) and return array.


#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;

public:
    void setTime(int hr, int min, int sec) {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    void showTime() {
        cout << hr << " hr "
             << min << " min "
             << sec << " sec" << endl;
    }
};

// Method to dynamically create an array of Time objects
Time* createTimeArray(int size) {
    Time* ptr = new Time[size];

    return ptr;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    // Create dynamic array
    Time* arr = createTimeArray(n);

    // Initialize array elements
    for (int i = 0; i < n; i++) {
        int hr, min, sec;

        cout << "Enter time " << i + 1 << ": ";
        cin >> hr >> min >> sec;

        arr[i].setTime(hr, min, sec);
    }

    // Display array elements
    cout << "\nTime values:" << endl;

    for (int i = 0; i < n; i++) {
        arr[i].showTime();
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}