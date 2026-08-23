// Define a class Customer with instance members cust_id, name, email, mobile. Define non parameterized constructor and parameterized constructor in the class.


#include <iostream>
using namespace std;

class Customer {
private:
    int cust_id;
    string name;
    string email;
    string mobile;

public:
    // Non-parameterized constructor
    Customer() {
        cust_id = 0;
        name = "Unknown";
        email = "Not Available";
        mobile = "Not Available";
    }

    // Parameterized constructor
    Customer(int id, string n, string e, string m) {
        cust_id = id;
        name = n;
        email = e;
        mobile = m;
    }

    // Function to display customer details
    void showData() {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Mobile: " << mobile << endl;
    }
};

int main() {

    // Calls non-parameterized constructor
    Customer c1;

    cout << "Customer 1:" << endl;
    c1.showData();

    cout << endl;

    // Calls parameterized constructor
    Customer c2(101, "Aman", "aman@gmail.com", "9876543210");

    cout << "Customer 2:" << endl;
    c2.showData();

    return 0;
}