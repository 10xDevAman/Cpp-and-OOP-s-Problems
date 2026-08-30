// In Question 4, define a friend operator + to concatenate two Array objects. 


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

    // Copy constructor
    Array(const Array& a) {
        size = a.size;
        p = new int[size];

        for (int i = 0; i < size; i++) {
            p[i] = a.p[i];
        }
    }

    // Assignment operator - Deep Copy
    Array& operator=(const Array& a) {
        if (this == &a)
            return *this;

        delete[] p;

        size = a.size;
        p = new int[size];

        for (int i = 0; i < size; i++) {
            p[i] = a.p[i];
        }

        return *this;
    }

    // Friend + operator
    friend Array operator+(Array, Array);

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


// Friend operator+ definition
Array operator+(Array a1, Array a2) {

    Array result(a1.size + a2.size);

    // Copy first array
    for (int i = 0; i < a1.size; i++) {
        result.p[i] = a1.p[i];
    }

    // Copy second array
    for (int i = 0; i < a2.size; i++) {
        result.p[a1.size + i] = a2.p[i];
    }

    return result;
}


int main() {

    Array a1(3);

    Array a2(2);

    cout << "\nArray 1: ";
    a1.showData();

    cout << "Array 2: ";
    a2.showData();

    // Concatenate
    Array a3 = a1 + a2;

    cout << "After Concatenation: ";
    a3.showData();

    return 0;
}