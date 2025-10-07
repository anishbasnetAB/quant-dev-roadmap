#include <iostream>

void A() {
    std::cerr << "Entering A()\n";
    std::cout << "A\n";
    std::cerr << "Exiting A()\n";
}

void B() {
    std::cerr << "Entering B()\n";
    std::cout << "B\n";
    A();
    std::cerr << "Exiting B()\n";
}

int main() {
    std::cerr << "Entering main()\n";
    B();
    std::cerr << "Exiting main()\n";
}

// Difference 
// std::cout → normal program output (buffered, can be redirected with >).

// std::cerr → error/debug output (unbuffered, shows immediately, can be redirected separately with 2>).