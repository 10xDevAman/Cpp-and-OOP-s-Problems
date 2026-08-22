// Write a driver function main() to use TestResult class (Question 3).  Create an array to 5 TestResult objects, set values to all the objects and display the results in sorted order (by net_score).


#include <iostream>
using namespace std;

class TestResult {
private:
    int roll_no;
    int right;
    int wrong;
    float net_score;

    static float right_weightage;
    static float wrong_weightage;

public:
    // Setters
    void setRollNo(int r) {
        roll_no = r;
    }

    void setRight(int r) {
        right = r;
    }

    void setWrong(int w) {
        wrong = w;
    }

    void setNetScore(float score) {
        net_score = score;
    }

    // Getters
    int getRollNo() {
        return roll_no;
    }

    int getRight() {
        return right;
    }

    int getWrong() {
        return wrong;
    }

    float getNetScore() {
        return net_score;
    }

    // Static property setters
    static void setRightWeightage(float weightage) {
        right_weightage = weightage;
    }

    static void setWrongWeightage(float weightage) {
        wrong_weightage = weightage;
    }

    // Static property getters
    static float getRightWeightage() {
        return right_weightage;
    }

    static float getWrongWeightage() {
        return wrong_weightage;
    }
};

// Define static members
float TestResult::right_weightage = 1.0;
float TestResult::wrong_weightage = 0.25;


int main() {

    // Array of 5 TestResult objects
    TestResult students[5];

    // Set values
    students[0].setRollNo(101);
    students[0].setRight(8);
    students[0].setWrong(2);
    students[0].setNetScore(7.5);

    students[1].setRollNo(102);
    students[1].setRight(9);
    students[1].setWrong(1);
    students[1].setNetScore(8.75);

    students[2].setRollNo(103);
    students[2].setRight(6);
    students[2].setWrong(4);
    students[2].setNetScore(5.0);

    students[3].setRollNo(104);
    students[3].setRight(10);
    students[3].setWrong(0);
    students[3].setNetScore(10.0);

    students[4].setRollNo(105);
    students[4].setRight(7);
    students[4].setWrong(3);
    students[4].setNetScore(6.25);


    // Sort by net_score (Ascending Order)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {

            if (students[i].getNetScore() >
                students[j].getNetScore()) {

                TestResult temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }


    // Display sorted results
    cout << "Results Sorted by Net Score:\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Roll No: " << students[i].getRollNo()
             << "  Right: " << students[i].getRight()
             << "  Wrong: " << students[i].getWrong()
             << "  Net Score: " << students[i].getNetScore()
             << endl;
    }

    return 0;
}