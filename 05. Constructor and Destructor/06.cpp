// Define a class Numbers with size and arr pointer as instance variables. Provide constructor to initialise instance members, dynamically allocate an array of given size and store address in arr variable of object. Also define destructor to deallocate memory of array. Implement deep copy using copy constructor to avoid memory issues.


#include <iostream>
using namespace std;

class Numbers {
private:
    int size;
    int* arr;

public:
    // Parameterized Constructor
    Numbers(int s) {
        size = s;
        arr = new int[size];

        cout << "Enter " << size << " numbers: ";

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Copy Constructor - Deep Copy
    Numbers(const Numbers& n) {
        size = n.size;

        // New memory allocate
        arr = new int[size];

        // Copy each element
        for (int i = 0; i < size; i++) {
            arr[i] = n.arr[i];
        }
    }

    // Display array
    void showData() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Numbers() {
        delete[] arr;
        cout << "Memory released." << endl;
    }
};

int main() {

    Numbers n1(5);

    cout << "Original object: ";
    n1.showData();

    // Copy constructor called
    Numbers n2 = n1;

    cout << "Copied object: ";
    n2.showData();

    return 0;
}