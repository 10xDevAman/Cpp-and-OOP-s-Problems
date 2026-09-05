// Define a class Shape with shapeName as instance variable. Provide setter and getter.


#include <iostream>
using namespace std;

class Shape {
private:
    string shapeName;

public:
    // Setter
    void setShapeName(string shapeName) {
        this->shapeName = shapeName;
    }

    // Getter
    string getShapeName() {
        return shapeName;
    }
};

int main() {
    Shape s;

    s.setShapeName("Circle");

    cout << "Shape Name: " << s.getShapeName() << endl;

    return 0;
}