// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;

bool isFibonacci(int n) 
{
    if (n < 0)
        return false;

    int a = 0, b = 1;

    while (a <= n) 
    {
        if (a == n)
            return true;

        int next = a + b;
        a = b;
        b = next;
    }

    return false;
}

int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
        cout << num << " is a term of Fibonacci series." << endl;
    else
        cout << num << " is not a term of Fibonacci series." << endl;

    return 0;
}