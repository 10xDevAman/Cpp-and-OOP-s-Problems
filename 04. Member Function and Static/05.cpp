/*
Define a class Matrix to represent a 3×3 order matrix. Provide appropriate methods and properties to the class. Also define following methods in the class:
    1.	Matrix add(Matrix)
    2.	Matrix sub(Matrix)
    3.	Matrix multiply(Matrix)
    4.	Matrix transpose()
    5.	bool is singular()
*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
    // Set matrix elements
    void setMatrix() {
        cout << "Enter 9 elements of matrix:\n";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Display matrix
    void showMatrix() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 1. Matrix Addition
    Matrix add(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }

        return result;
    }

    // 2. Matrix Subtraction
    Matrix sub(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = mat[i][j] - m.mat[i][j];
            }
        }

        return result;
    }

    // 3. Matrix Multiplication
    Matrix multiply(Matrix m) {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                result.mat[i][j] = 0;

                for (int k = 0; k < 3; k++) {
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }

        return result;
    }

    // 4. Transpose
    Matrix transpose() {
        Matrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = mat[j][i];
            }
        }

        return result;
    }

    // 5. Check whether matrix is singular
    bool isSingular() {

        int determinant =
            mat[0][0] * (mat[1][1] * mat[2][2] -
                         mat[1][2] * mat[2][1])

            - mat[0][1] * (mat[1][0] * mat[2][2] -
                           mat[1][2] * mat[2][0])

            + mat[0][2] * (mat[1][0] * mat[2][1] -
                           mat[1][1] * mat[2][0]);

        return determinant == 0;
    }
};

int main() {

    Matrix m1, m2, result;

    cout << "Enter first matrix:\n";
    m1.setMatrix();

    cout << "\nEnter second matrix:\n";
    m2.setMatrix();

    cout << "\nMatrix 1:\n";
    m1.showMatrix();

    cout << "\nMatrix 2:\n";
    m2.showMatrix();

    // Addition
    result = m1.add(m2);

    cout << "\nAddition:\n";
    result.showMatrix();

    // Subtraction
    result = m1.sub(m2);

    cout << "\nSubtraction:\n";
    result.showMatrix();

    // Multiplication
    result = m1.multiply(m2);

    cout << "\nMultiplication:\n";
    result.showMatrix();

    // Transpose
    result = m1.transpose();

    cout << "\nTranspose of Matrix 1:\n";
    result.showMatrix();

    // Singular check
    if (m1.isSingular())
        cout << "\nMatrix 1 is Singular.";
    else
        cout << "\nMatrix 1 is Non-Singular.";

    return 0;
}