#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first number : \t"; // \t is used for tab space
    cin >> a;

    cout << "Enter your second number : \t";
    cin >> b;

    cout << "Sum of number is : \t" << a + b;

    // Type Casting
    int a = 65;
    char c = 'b';
    // a = c; 
    c = a;  // Implicit Type Casting

    cout << c; // Output will be A because ASCII value of A is 65
}

// Type Casting in C++
// 1. Implicit Type Casting
// 2. Explicit Type Casting
// Implicit Type Casting: It is done by the compiler automatically when a value of one data type is assigned to a variable of another data type. For example, assigning an int value to a float variable.
// Explicit Type Casting: It is done by the programmer using type casting operators. For example, converting a float value to an int using static_cast<int>(floatValue).
// There are two types of type casting operators in C++:
// 1. C-Style Cast: It is done using parentheses. For example, (int)floatValue.
// 2. C++-Style Cast: It is done using specific keywords like static_cast, dynamic_cast, const_cast, and reinterpret_cast. For example, static_cast<int>(floatValue).
// Example of Type Casting
// int a = 65;
// char c = 'b';
// // a = c; // Implicit Type Casting
// c = a; // Implicit Type Casting
// cout << c; // Output will be A because ASCII value of A is 65

// Example of Explicit Type Casting
// float f = 3.14;
// int i = (int)f; // C-Style Cast
// int j = static_cast<int>(f); // C++-Style Cast
// cout << i << " " << j; // Output will be 3 3

//ASCII Values
// ASCII (American Standard Code for Information Interchange) is a character encoding standard that represents text in computers and other devices that use text.
// It uses a 7-bit binary number to represent each character, which means it can represent a total of 128 characters (from 0 to 127).
// The ASCII table includes control characters (like newline, tab, etc.), printable characters (like letters, digits, punctuation marks, etc.), and special characters.
// For example:
// 'A' to 'Z' are represented by ASCII values 65 to 90
// 'a' to 'z' are represented by ASCII values 97 to 122
// '0' to '9' are represented by ASCII values 48 to 57
// Special characters like '!', '@', '#', etc. have their own ASCII values as well