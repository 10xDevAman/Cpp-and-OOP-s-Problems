/*
Consider the following class Array
    class Array
    {
    int *p;
    int size;
    public:
    // methods

    };
Define operator = to perform deep copy of Array objects.
*/

#include <iostream>
using namespace std;

class Array {
private:
    int* p;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        p = new int[size];

        cout << "Enter " << size << " elements: ";

        for (int i = 0; i < size; i++) {
            cin >> p[i];
        }
    }

    // Copy Constructor
    Array(const Array& a) {
        size = a.size;
        p = new int[size];

        for (int i = 0; i < size; i++) {
            p[i] = a.p[i];
        }
    }

    // Overload = operator for deep copy
    Array& operator=(const Array& a) {

        // Self-assignment check
        if (this == &a)
            return *this;

        // Delete old memory
        delete[] p;

        // Allocate new memory
        size = a.size;
        p = new int[size];

        // Copy elements
        for (int i = 0; i < size; i++) {
            p[i] = a.p[i];
        }

        return *this;
    }

    // Display array
    void showData() {
        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] p;
    }
};

int main() {

    Array a1(5);

    cout << "\nArray a1: ";
    a1.showData();

    // Deep copy using overloaded =
    Array a2(3);

    a2 = a1;

    cout << "\nArray a2 after copying: ";
    a2.showData();

    return 0;
}