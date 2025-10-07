// A macro is a placeholder that the preprocessor replaces with something else before compilation.

// In this case:

// __DATE__ → replaced with a string literal like "Oct 5 2025"

// __TIME__ → replaced with a string literal like "14:37:00"
#include <iostream>

int main(){
    std::cout<<__DATE__;
    std::cout<<__TIME__;
}