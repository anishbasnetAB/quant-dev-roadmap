// Write a program that uses a function int multiply(int x, int y).
// Place the function definition below main().
// Use a forward declaration above main().
// In main(), ask the user for two numbers, call multiply, and print the result.
#include <iostream>

int multiply(int x, int y);

int main(){
    int firstNumber{0};
    int secondNumber{0};
    std::cout<<"Enter a first number ";
    std::cin>>firstNumber;
    std::cout<<"Enter a second number ";
    std::cin>>secondNumber;


    int result=multiply(firstNumber,secondNumber);

    std::cout<<"Multiple = "<<result;
    return 0;
}

int multiply(int x, int y){
    return x*y;
}
