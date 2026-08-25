// Define a class student and write a program to enter student details using constructor and define member function to display all the details.


#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int age;
    float marks;

public:
    // Parameterized Constructor
    Student(int r, string n, int a, float m) {
        rollNo = r;
        name = n;
        age = a;
        marks = m;
    }

    // Display student details
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int rollNo, age;
    string name;
    float marks;

    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Marks: ";
    cin >> marks;

    // Constructor is called here
    Student s(rollNo, name, age, marks);

    cout << "\nStudent Details:\n";
    s.display();

    return 0;
}