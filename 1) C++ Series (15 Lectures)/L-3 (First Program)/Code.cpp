#include<iostream>
using namespace std;

int main() {
    std::cout<<"We are Coder Army \n";
    // So after using namespace std, we don't have to write std again and again
    // \n is used for new line
    //endl can also be used for new line
    //difference between \n and endl is that endl flushes the buffer meaning it forces the output to be written to the console immediately
    
    cout<<"Hello Everyone \n";
    cout<<3 + 2 <<endl;

    int a; // Variable declaration
    a = 10; 
    cout<<a;

    char c = 'a';
    cout<<c;

    float f = 2.31;
    cout<<f;

    double d = 3.121;
    cout<<d;

    bool b = 0;
    cout<<b;
};

//data types in c++
//1. int - integer values
//2. char - single character values
//3. float - decimal values up to 7 digits
//4. double - decimal values up to 15 digits
//5. bool - true or false values (1 or 0)
//6. void - represents absence of value
//7. wchar_t - wide character type
//8. unsigned int - only non-negative integer values
//9. long - larger integer values
//10. short - smaller integer values
//11. long long - even larger integer values
//12. unsigned long - only non-negative larger integer values
//13. unsigned short - only non-negative smaller integer values
//14. long double - decimal values with more precision than double
//15. auto - automatically deduces the type of the variable from its initializer
//16. enum - user-defined type consisting of a set of named integral constants
//17. struct - user-defined type that groups related variables of different types
//18. union - user-defined type that allows storing different data types in the same memory location
//19. nullptr_t - type of the null pointer literal nullptr