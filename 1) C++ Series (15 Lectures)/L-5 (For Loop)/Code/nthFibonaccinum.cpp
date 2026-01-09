// Find the n’th Fibonacci number

#include <iostream>
using namespace std;
int main()
{
    int last = 0;
    int prev = 1;
    int current, n;

    cout << "Enter the n'th number : ";
    cin >> n;

    if (n == 1)
    {
        cout << last;
    }
    else if (n == 2)
    {
        cout << prev;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            current = last + prev;
            last = prev;
            prev = current;
        }
    }

    cout << current;
}
// Fibonacci Series: A series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
// Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// In this code, we are finding the n’th Fibonacci number using a for loop.

//explanation of the code:
            // current = last + prev;
            // last = prev;
            // prev = current;

// Here, 'last' holds the (n-2)th Fibonacci number, 'prev' holds the (n-1)th Fibonacci number, and 'current' will hold the nth Fibonacci number.