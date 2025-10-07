// Great question 👍 — `assert` and `try/catch` **look like they both deal with “errors,”** but they’re actually very different tools in C++.

// ---

// ## 🔹 `assert`

// * Used for **programmer mistakes / logic errors**.
// * Example: factorial is only defined for `n >= 0`. If `n` is negative → that’s a bug.
// * If the condition fails, program **aborts immediately** with an error message.
// * Not meant to be “handled” → it’s there to **catch bugs during development**.
// * Can be disabled in release builds (`-DNDEBUG`).

// ---

// ## 🔹 `try / catch` (exceptions)

// * Used for **runtime errors that may reasonably occur** (like file not found, network failure, invalid user input).
// * You **throw** an exception where the error happens, and **catch** it somewhere else to recover gracefully.
// * Program does **not abort** automatically; you decide how to handle the error.

// ---

// ## 🔹 Analogy

// * **`assert`**: “This must never happen. If it does, kill the program because my assumptions are broken.”
// * **`try/catch`**: “Something might go wrong here. Let’s be ready to handle it without crashing.”

// ---

// ✅ **So:**

// * Use **`assert`** for conditions that should always be true if your code is correct.
// * Use **exceptions (`try/catch`)** for errors that can happen in the real world and should be handled.

// Assertion Practice Write a function int factorial(int n) that asserts n >= 0.
//  Demonstrate both: normal run (n=5) assertion failure (n=-3)
#include <iostream>
#include <cassert>

int factorial(int x){
    assert(x>=0);

    if(x==0 || x==1) return 1;

    int result{1};

    for(int a =2; a<x; ++a){
        result *= a;
    }

    return result;

}

int main(){
    std::cout<<factorial(4);
    std::cout<<factorial(0);
    // std::cout<<factorial(-6);

}