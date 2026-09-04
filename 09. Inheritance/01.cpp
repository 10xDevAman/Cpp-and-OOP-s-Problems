// Define a class Person with name and age as instance variables as private members. Provide setters and getters as protected methods. Derive a class Employee from Person class with private instance variable salary. Provide public methods setEmployee() and showEmployee().


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

protected:

    void setName(string name) {
        this->name = name;
    }


    void setAge(int age) {
        this->age = age;
    }


    string getName() {
        return name;
    }


    int getAge() {
        return age;
    }
};

class Employee : public Person {
private:
    float salary;

public:

    void setEmployee(string name, int age, float salary) {
        setName(name);
        setAge(age);
        this->salary = salary;
    }


    void showEmployee() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.setEmployee("Aman", 22, 50000);

    e.showEmployee();

    return 0;
}