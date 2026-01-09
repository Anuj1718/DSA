#include <iostream>
using namespace std;

int main()
{
    // Printing a to z all alphabets
    for(char i = 'a'; i <= 'z'; i++) {
        cout<<i<<" ";
    }

    // Print numbers from 1 to 100 but takes 3 jump
    for(int i = 1; i <= 100; i = i + 3) {
        cout<<i<<" ";
    }

    // Print a table
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i<<endl;
    }

    // Print the given power of the given number
    int num, pow;
    cout<<"Enter the number : ";
    cin >> num;
    cout<<"Enter the power : ";
    cin>>pow;

    int ans = num;

    for(int i = 1; i < pow; i++) {
        ans = ans * num; 
    }
    // or num**pow (not in c++)
    // operators in c++ : +, -, *, /, %

    cout<<ans;

    // Factorial of a number
    // (This solution is limited to small number of )
    int num, fact = 1;
    cin>>num;
    for(int i = 2; i <= num; i++) {
        fact = fact * i;
    }
    cout<<fact;

    // Prime number
    int num;
    cin>>num;

    if(num < 2) {
        return 0; // so that program ends here, doesn't go to "Prime" print
    }
    else {
        for(int i = 2; i <= num - 1; i++) {
            if(num % i == 0){
                cout<<"Not Prime";
                return 0; //so that program ends here, doesn't go to "Prime" print
            }
        }
        cout<<"Prime";
    }
    return 0; //can write at the end of main function
}

//break vs return 0
// | Aspect                 | `break` | `return 0` |
// | ---------------------- | ------- | ---------- |
// | Exits loop             | ✅       | ✅          |
// | Exits function         | ❌       | ✅          |
// | Exits program (`main`) | ❌       | ✅          |
// | Needs extra logic      | Often   | No         |
// | Strength               | Weak    | Strong     |
// In summary, `break` exits loops, while `return 0` exits functions and the program.