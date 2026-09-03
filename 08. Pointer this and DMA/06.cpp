// In question-4, define a method to sort Time object array.


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

    // Convert time into seconds
    int getTotalSeconds() {
        return hr * 3600 + min * 60 + sec;
    }
};

// Method to sort Time object array
void sortTime(Time arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i].getTotalSeconds() >
                arr[j].getTotalSeconds()) {

                // Swap objects
                Time temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    Time* arr = new Time[n];

    // Input Time objects
    for (int i = 0; i < n; i++) {
        int hr, min, sec;

        cout << "Enter time " << i + 1 << ": ";
        cin >> hr >> min >> sec;

        arr[i].setTime(hr, min, sec);
    }

    cout << "\nBefore sorting:" << endl;

    for (int i = 0; i < n; i++) {
        arr[i].showTime();
    }

    // Sort array
    sortTime(arr, n);

    cout << "\nAfter sorting:" << endl;

    for (int i = 0; i < n; i++) {
        arr[i].showTime();
    }

    // Free dynamic memory
    delete[] arr;

    return 0;
}