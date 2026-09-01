// Define a class Student with roll no, name and age as instance variables. Create setStudent() and showStudent() methods in the class. Overload operator == to compare two Student objects.


#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int age;

public:
    // Set student details
    void setStudent(int r, string n, int a) {
        rollNo = r;
        name = n;
        age = a;
    }

    // Show student details
    void showStudent() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Overload == operator
    bool operator==(Student s) {
        return rollNo == s.rollNo &&
               name == s.name &&
               age == s.age;
    }
};

int main() {

    Student s1, s2;

    // Set details
    s1.setStudent(101, "Aman", 22);
    s2.setStudent(101, "Aman", 22);

    cout << "Student 1:" << endl;
    s1.showStudent();

    cout << "\nStudent 2:" << endl;
    s2.showStudent();

    // Compare students
    if (s1 == s2)
        cout << "\nBoth students are equal." << endl;
    else
        cout << "\nBoth students are not equal." << endl;

    return 0;
}