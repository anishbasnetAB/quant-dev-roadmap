// Write a function int square(int x) that returns the square of its argument.
// In main(), print square(5) and square(10) on separate lines.
#include <iostream>
int square(int x){
    return x*x;
}

int main(){
    int a= square(5);
    int b= square(10);
    std::cout<<"square of a number 5 "<<a<<std::endl;
    std::cout<<"square of a number 10 "<<b<<std::endl;
    return 0;
}