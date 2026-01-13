#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operator : Unary and Binary

    //Binary Operators : Have two operands
    // {+, -, *, /, %}
    // cout<<12.4 / 4<<" ";


    //Order of precedence
    //double > float > long > int
    //hence 12.2/4 = 3.05 and 12/4 = 3 i.e float/int = float as per the order of precedence
    
    //rule of precedence
    // {*, /, %} have higher precedence than {+, -}


    //rule of associativity (to resolve ties)
    // left to right
    // cout<<12/4*2<<" "; // 6 * 2 = 3


    // Unary Operators : Have only one operand
    // a++, ++a, --a, a--
    // int a = 12;
    // int b = a++;
    // cout<<b<<" "<<a;

    // a++ : post-increment operator
    // ++a : pre-increment operator
    // a-- : post-decrement operator
    // --a : pre-decrement operator

    // Comparision Operator
    // {==, >, <, >=, =<, !=}

    // if (2 == 5)
    //     cout << "Yes";
    // else
    //     cout << "No";

    // Note that they always return 0 or 1 and are used inside if-else conditions.

    //Precedence of comparision operators is less than arithmetic operators
    //Precedence of Comparision operators is more than Logical operators

    //Precedence of Comparision operators:
    // {>, <, >=, =<} have more precedence than {==, !=}

    //Associativity of comparision operators is left to right
    

    //5 > 3 == 1 < 2
    // (5 > 3) == (1 < 2)
    // 1 == 1
    // 1

    // Logical Operator 
    // {&&, ||, !} (read as AND, OR, NOT)
    // Logical operators: &&, ||, ! are explained via truth tables and real-life style conditions (e.g. largest of three numbers, vowel vs consonant). Short-circuiting behavior of && and || is emphasized so you see why some conditions are not evaluated. 
    //they always return 0 or 1 and are used inside if-else conditions.
    // && : AND operator
    //both value non-zero then only it returns true(1)
    //if either one value is zero then it returns false(0)
    // cout<<(2 > 1 && 3 > 2)<<" "; // 1 && 1 = 1
    //|| : OR operator
    //if either one value is non-zero then it returns true(1)
    //if both value is zero then it returns false(0)
    // cout<<(2 > 1 || 3 < 2)<<" "; // 1 || 0 = 1

    // if(3 > 2 && 3 > 1)
    //     cout<<"Yes ";
    // else 
    //     cout<<"No ";

    // Bitwise Operator
    // {&, |, ^, ~, <<, >>} (read as Bitwise AND, Bitwise OR, Bitwise XOR, Bitwise NOT, Left Shift, Right Shift)
    // Bitwise operators: &, |, ^, ~, <<, >> are introduced with binary representations, showing how they operate bit-by-bit and how left shift corresponds roughly to multiplication by powers of 2 and right shift to division, with caveats about signed numbers and implementation dependence. 

    //first convert numbers to binary form
    // 2 =  0 0 1 0
    // 3 =  0 0 1 1
    //then perform operation bit by bit

    // int num = 2 & 3;
    // cout<<num<<" ";

    //XOR Operator (^)
    // working of XOR operator (if same bit then 0 else 1) (ek jaisa dikhna hi nai hai tabhi naam ex OR hai)
    // 0 ^ 0 = 0
    // 0 ^ 1 = 1
    // 1 ^ 0 = 1
    // 1 ^ 1 = 0    
    
    //Left Shift Operator (<<)
    // it is used to multiply a number by 2 raised to the power of n(where n is number of positions shifted)
    // Example:
    //6 << 1 = 12 (6*2^1)
    //6 << 2 = 24 (6*2^2)

    //left shift as in shifting bits (all the 32 bits) to left side and filling 0 at right side

    //if first bit is 0 then it is positive number else negative number
    //so it may end up in negative number if we left shift a number too much or in big number
    //say we had bit 1 at 31st position and we left shift it by 1 position then it will go to 32nd position which is sign bit and hence it will become negative number

    //-6 << 1 //this is undefined behaviour as left shifting negative numbers is not defined in C++ standard, it may vary from compiler to compiler

    //Right Shift Operator (>>)
    //we shift bits to right side and fill 0 at left side for positive numbers and 1 at left side for negative numbers
    // it is used to divide a number by 2 raised to the power of n(where n is number of positions shifted)
    // Example:
    //20 >> 1 = 10 (20/2^1)


    //bitwise not operator (~)
    //it inverts all bits of a number
    // ~2
    // 2 =  0 0 1 0
    // ~2=  1 1 0 1 (in 4 bit representation)
    //in 32 bit representation it will be
    // 2 =  0000....0010
    // ~2=  1111....1101
    //this is negative number as first bit is 1
    //to find its magnitude we do 2's complement
    //invert bits (1s complement) and add 1
    // 0000....0010
    //+               1
    // 0000....0011 = 3
    //hence ~2 = -3
    // ~x = -(x+1)

    //precedence of bitwise operators is less than comparision operators and more than logical operators
    //precedence of bitwise operators:
    // {<<, >>} have more precedence than {&, ^, |}

    // Assignment Operator
    // {=, +=, -=, *=, /=}

    //Precedence table recap:
    // Arithmetic Operators: {*, /, %} > {+, -}
    // Comparision Operators: {>, <, >=, =<} > {==, !=}
    // Bitwise Operators: {<<, >>} > {&, ^, |}
    // Logical Operators: {&&} > {||}


    //precedence from high to low:
    // 1. Arithmetic Operators
    // 2. Comparision Operators
    // 3. Bitwise Operators
    // 4. Logical Operators
    // 5. Assignment Operators
    
}