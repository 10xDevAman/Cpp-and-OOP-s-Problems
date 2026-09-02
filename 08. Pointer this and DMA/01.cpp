// Define a class Person with name and age as instance variables. Provide parameterized constructor with two formal arguments name & age, to initialize instance variables.


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Display person details
    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p("Aman", 25);

    p.showPerson();

    return 0;
}