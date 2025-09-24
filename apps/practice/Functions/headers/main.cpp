// ✅ Q2 (Header + Multiple Files)
// Split your program into three files:
// main.cpp → contains only main().
// math.cpp → contains the definition of int square(int x).
// math.h → contains the forward declaration of square(int).
// In main(), ask the user for a number and print its square by calling square().

#include <iostream>
#include "math.h" 

int main(){
    int askInput{0};
    std::cout<<"Enter a number ";
    std::cin>>askInput;
    int result = square(askInput);

    std::cout<<"Square of "<<askInput<<" is "<<result;
    return 0;
}