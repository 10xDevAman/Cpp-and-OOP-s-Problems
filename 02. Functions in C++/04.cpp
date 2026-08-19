// Define a function to print Pascal Triangle up to N lines.

#include <iostream>
using namespace std;

void printPascalTriangle(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        
        // Print spaces for triangle shape
        for (int space = 0; space < n - i - 1; space++) 
        {
            cout << " ";
        }

        int value = 1;

        for (int j = 0; j <= i; j++) 
        {
            cout << value << " ";

            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
}

int main() 
{
    int n;

    cout << "Enter number of lines: ";
    cin >> n;

    printPascalTriangle(n);

    return 0;
}