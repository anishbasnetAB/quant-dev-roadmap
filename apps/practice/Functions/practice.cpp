// Write a function int square(int x) that returns the square of its argument.
// Then write a program that:
// Asks the user for a number.
// Calls square() to compute the square.
// Prints the result.
// Topics: introduction to functions, return values, function parameters.
#include <iostream>



int askInput(){
    int userInput{0};
    std::cout<<"Enter a number";
    std::cin>>userInput;

    return userInput;
}

int square(int x){
    return x*x; 
}


int main(){
    int a=askInput();
    a=square(a);
    std::cout<<"Square of a number = "<<a;
    return 0;
}