#include <iostream>
void change(int x) { x = 99; }
int main() {
    int a{10};
    change(a);
    std::cout << a << '\n';
}

//Why value of a is not changed?
// In C++, function parameters are passed by value by default.
// That means when you call change(a), the function gets a copy of a.

// x is a separate variable inside change().

// Changing x does not affect a in main().

// After change() ends, x is destroyed and a remains unchanged.
//to actually modify either pass as a reference or pass as a pointer.