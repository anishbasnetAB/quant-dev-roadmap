// Write a program with a separate function printWelcome() that prints
// Welcome to Quant Systems!
// Call it twice from main()

#include <iostream>
int printWelcome(){
    std::cout<<"Welcome to Quant Systems!\n"<<std::endl; // 2 diff methods to write in a new line.
    return 0;
}

int main(){
    printWelcome();
    printWelcome();
    return 0;
}