#include <iostream>
namespace risk {
    void log() { std::cout << "Risk checked\n"; }
}
namespace trade {
    void log() { std::cout << "Trade executed\n"; }
}
int main() {
    // print both messages
    risk::log();
    trade::log();
}
// Preprocessor Toggle
// Use

// #define DEBUG


// to conditionally compile a line that prints "Debug mode active" only when DEBUG is defined.

#define DEBUG   // Try commenting this line to disable debug mode

int main() {
    #ifdef DEBUG
        std::cout << "Debug mode active\n";
    #endif

    std::cout << "Program running...\n";
    return 0;
}
