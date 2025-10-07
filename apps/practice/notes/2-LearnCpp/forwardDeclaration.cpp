// Create a function void printSum() that defines two locals a=5, b=6 and prints their sum.
// Try printing a again in main() — confirm the compile error and comment why.
#include <iostream>

void printSum(){
    int a{5};
    int b{6};
    std::cout<<"sum is "<<a+b;
}

int main(){
    std::cout<<" print a "<<a; // it won't run because, we defined variable a in printSum() it is not a global
    //variable it is a local variable inside that function, hence, it's scope is limited and right after the function
    //ends the variable is destroyed. 
}