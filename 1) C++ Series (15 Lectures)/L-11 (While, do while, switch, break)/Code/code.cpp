#include <iostream>
using namespace std;

//generic pattern: initialization → condition (break condition) → work → update.

int main()
{
    // while loop
    int n;
    cout << "Enter the Number : ";
    cin >> n; 

    int i = 1; // initialize
    while (i <= n) // break
    {
        cout << i << " ";
        i++; // update
    }

    //print factors of a number using while loop
    n = 0;
    cout << "Enter the Number : ";
    cin >> n;
    int i = 1; // initialize
    while (i <= n) // break
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++; // update
    }    
 //egs printing 1 to n, multiplication tables, factors of a number, and printing even/odd numbers


    // do while loop : it will execute atleast once
    // sum of first n natural numbers
    cout << "Enter the Number : ";
    cin >> n; // initialize
    int sum = 0;
    i = 1;
    do{
        sum += i;
        i++;
    } while(i <= n);

    cout<<sum;
    //egs printing numbers, sum of n naturals
}

//while vs do while explanation
// In while loop, condition is checked first then loop body is executed.
// In do while loop, loop body is executed first then condition is checked.


//  a pitfall in do while: in printing numbers from 1 to n, if user enters 0, do-while still prints once, so you must know when it is appropriate to use.


//break and continue statements
// break: used to exit from a loop or switch case
// continue: used to skip the current iteration of a loop and move to the next iteration.
//egs: print numbers from 1 to n but stop if number is greater than 50 (break), print numbers from 1 to n but skip multiples of 3 (continue)  

//break vs return 0
// | Aspect              | `break`       | `return 0`         |
// | ------------------- | ------------- | ------------------ |
// | Exits               | Loop / switch | Function           |
// | Ends program?       | ❌ No          | ✅ Yes (in `main`)  |
// | Can return value    | ❌             | ✅                  |
// | Execution continues | After loop    | No (function ends) |


//scope of variables in loops
// variables declared inside a loop are not accessible outside the loop
//egs: declaring counter variable inside for loop, declaring sum variable inside while loop
//wrong:
// for(int i=0; i<10; i++){
//     cout<<i<<" ";
// }
// cout<<i; // error: i is not declared in this scope   

//correct:
// int i;
// for(i=0; i<10; i++){
//     cout<<i<<" ";
// }
// cout<<i; // valid: i is declared outside the loop
//note: in for loop, if variable is declared inside the loop, its scope is limited to the loop only.

//int i =20; // global scope
//{
//    int i =10; // local scope
//    cout<<i; // prints 10
//
//}
//
//int i =10; // not allowed: redefinition of i
// cant make a variable with same name in same scope again
//doing cout before declaration is also not allowed


// int i = 20;

// for(; i<=30; i++){
//     cout<<i<<" ";
// }
//op:20 21 22 23 24 25 26 27 28 29 30
//pehle apni block mai dhundega, nai mila to global mai dhundega
//ek scope mai same name ki variable nai bana sakte

// for(;;){
//     // infinite loop
// }    == while(true){
//     // infinite loop
// }

//summary:
//pehle apni block mai dhundega, nai mila to global mai dhundega
//ek scope mai same name ki variable nai bana sakte