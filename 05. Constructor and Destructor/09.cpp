// Define a class Room for a hotel management project with room number, room type, is_AC, price as instance variables. Initialize instance variables using constructor.


#include <iostream>
using namespace std;

class Room {
private:
    int room_number;
    string room_type;
    bool is_AC;
    float price;

public:
    // Parameterized Constructor
    Room(int number, string type, bool ac, float p) {
        room_number = number;
        room_type = type;
        is_AC = ac;
        price = p;
    }

    // Display room details
    void showRoom() {
        cout << "Room Number: " << room_number << endl;
        cout << "Room Type: " << room_type << endl;
        cout << "AC: " << (is_AC ? "Yes" : "No") << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Room r(101, "Deluxe", true, 2500);

    r.showRoom();

    return 0;
}