// Define a class TestResult with properties roll_no, right, wrong, net_score. Also define class properties right_weightage, wrong_weightage. Provide methods to set and get all the properties.

#include <iostream>
using namespace std;

class TestResult {
private:
    int roll_no;
    int right;
    int wrong;
    float net_score;

    // Class properties
    static float right_weightage;
    static float wrong_weightage;

public:
    // Set instance properties
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

    // Get instance properties
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

    // Set class properties
    static void setRightWeightage(float weightage) {
        right_weightage = weightage;
    }

    static void setWrongWeightage(float weightage) {
        wrong_weightage = weightage;
    }

    // Get class properties
    static float getRightWeightage() {
        return right_weightage;
    }

    static float getWrongWeightage() {
        return wrong_weightage;
    }
};

// Definition of static class properties
float TestResult::right_weightage = 1.0;
float TestResult::wrong_weightage = 0.25;

int main() {
    TestResult t;

    // Set values
    t.setRollNo(101);
    t.setRight(8);
    t.setWrong(2);
    t.setNetScore(7.5);

    TestResult::setRightWeightage(1.0);
    TestResult::setWrongWeightage(0.25);

    // Get values
    cout << "Roll No: " << t.getRollNo() << endl;
    cout << "Right Answers: " << t.getRight() << endl;
    cout << "Wrong Answers: " << t.getWrong() << endl;
    cout << "Net Score: " << t.getNetScore() << endl;

    cout << "Right Weightage: "
         << TestResult::getRightWeightage() << endl;

    cout << "Wrong Weightage: "
         << TestResult::getWrongWeightage() << endl;

    return 0;
}