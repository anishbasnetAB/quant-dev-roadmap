// Runtime Error Simulation
// Write a program that:

// Reads two integers from input

// Divides the first by the second

// Crashes (division by zero) if user enters 0
// Then modify it to prevent the crash safely.

#include <iostream>
int main(){
    std::cout<<"Enter 2 numbers \n";
    int firstNum, secondNum{};
    std::cin>>firstNum;
    std::cin>>secondNum;
    if(secondNum!=0){
        std::cout<<"Division is "<<firstNum/secondNum;
    }
    else{
        std::cout<<" Can not divide a number with 0 ";
    }
}