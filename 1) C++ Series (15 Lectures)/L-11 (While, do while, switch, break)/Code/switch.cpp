
//switch case
// used to select one of many code blocks to be executed.
// syntax:
/*
switch(expression) {
    case constant1:
        // code block
        break;
    case constant2:
        // code block                                       
        break;
    ...
    default:
        // code block
}
*/
//egs: print month name based on month number, print day name based on day number
//note: break is used to exit the switch case, if break is not used, it will continue to execute the next case (fall through).
//in switch case, expression must be of integral or enum type, cannot be float or double.
// also, case values must be int, char or constant expressions, cannot be variables.(float, double not allowed)
//integral means: int, char, short, long, enum types.


// In **C++ `switch`**, there are strict rules for **what the expression can be** and **what the case labels can be**.

// ---

// ## 1. `switch ( expression )` — what the expression can be

// The **expression must evaluate to an integral or enum type**.

// Allowed:

// * `int`
// * `char`
// * `short`
// * `long`
// * `long long`
// * `bool`
// * `enum` / `enum class`

// Examples:

// ```cpp
// int x = 2;
// switch (x) { }

// char c = 'a';
// switch (c) { }

// enum Day { Mon, Tue };
// Day d = Mon;
// switch (d) { }
// ```

// Not allowed:

// * `float`, `double`
// * `string`
// * arrays
// * objects
// * expressions that result in non-integral types

// Invalid:

// ```cpp
// float f = 2.5;
// switch (f) { }          // ❌

// string s = "hi";
// switch (s) { }          // ❌
// ```

// ---

// ## 2. `case` labels — what they can be

// Each `case` value must be a **compile-time constant** of the **same type (or compatible)** as the switch expression.

// Allowed:

// * Integer literals
// * Character literals
// * Enum constants
// * Constant expressions (`const int`, `constexpr`)

// Examples:

// ```cpp
// switch (x) {
//     case 1:
//     case 2 + 3:
//     case 'a':
//         break;
// }
// ```

// Using `const`:

// ```cpp
// const int A = 10;
// switch (x) {
//     case A:
//         break;
// }
// ```

// Not allowed:

// * Variables (even if they don’t change)
// * Runtime expressions
// * Strings

// Invalid:

// ```cpp
// int y = 5;
// switch (x) {
//     case y:        // ❌ not compile-time constant
//         break;
// }
// ```

// ---

// ## 3. Variable rules inside `switch`

// * You **can** declare variables inside a `case`, **but must use braces**.

// Wrong:

// ```cpp
// case 1:
//     int a = 5;   // ❌ scope issue
//     break;
// ```

// Correct:

// ```cpp
// case 1: {
//     int a = 5;
//     break;
// }
// ```

// ---

// ## 4. Summary (quick mental model)

// | Component            | Rule                          |
// | -------------------- | ----------------------------- |
// | `switch(expression)` | Must be integral or enum      |
// | `case value`         | Must be compile-time constant |
// | Strings / floats     | ❌ Not allowed                 |
// | Variables in `case`  | Allowed only with `{}`        |
// | `default`            | Optional, no condition        |

// ---

// ## Strategic takeaway

// Use `switch` **only when**:

// * You’re matching **fixed, known values**
// * The domain is **discrete and finite**

// If values are dynamic, ranges, strings, or complex conditions → `if-else` is the correct tool.

// If you want, I can also contrast `switch` vs `if-else` in terms of **performance, readability, and compiler behavior**.
