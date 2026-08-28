/*
Consider the following class Array
    class Array
    {
    int *p; int size;
    public:
    // methods
    };
Define constructor to allocate an array of given size (size is given through parameter). Define a subscript operator to access element at given index. Define destructor to deallocates the memory of array.
*/

#include <iostream>
using namespace std;

class Array {
private:
    int *p;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        p = new int[size];

        cout << "Enter " << size << " elements:" << endl;

        for (int i = 0; i < size; i++) {
            cin >> p[i];
        }
    }

    // Overload subscript [] operator
    int& operator[](int index) {
        return p[index];
    }

    // Destructor
    ~Array() {
        delete[] p;
    }
};

int main() {
    Array a(5);

    cout << "\nArray elements are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}