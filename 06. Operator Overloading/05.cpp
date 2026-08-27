/* Define a class matrix to represent 3x3 matrix. Provide appropriate instance methods. Also define operator +, operator -, operator * to perform addition, subtraction and multiplication operations respectively.

    Consider following class Numbers

    class Numbers
    {
    int x,y,z;
    public:
    // methods
    };
    Overload the operator unary minus (-) to negate the numbers.
*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
    // Set matrix values
    void setData() {
        cout << "Enter 9 elements:" << endl;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Display matrix
    void showData() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overload + operator
    Matrix operator+(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }

        return result;
    }

    // Overload - operator
    Matrix operator-(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = mat[i][j] - m.mat[i][j];
            }
        }

        return result;
    }

    // Overload * operator
    Matrix operator*(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = 0;

                for (int k = 0; k < 3; k++) {
                    result.mat[i][j] +=
                        mat[i][k] * m.mat[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    Matrix m1, m2, result;

    cout << "Enter first matrix:" << endl;
    m1.setData();

    cout << "\nEnter second matrix:" << endl;
    m2.setData();

    // Addition
    result = m1 + m2;

    cout << "\nAddition:" << endl;
    result.showData();

    // Subtraction
    result = m1 - m2;

    cout << "\nSubtraction:" << endl;
    result.showData();

    // Multiplication
    result = m1 * m2;

    cout << "\nMultiplication:" << endl;
    result.showData();

    return 0;
}