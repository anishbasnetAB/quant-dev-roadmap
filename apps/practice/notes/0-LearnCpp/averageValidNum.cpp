#include <iostream>
int main(){
    double a{};
    double sum{};
    int count{};
    std::cout<<"Please enter a valid number (Double) ";
    while(std::cin>>a){
        std::cout<<"Please enter a valid number (Double) ";
        sum += a;
        count++;
    }

    if(count>0){
        std::cout<<"Average of valid inputs is "<<sum;
    }
    else{
        std::cout<<"No calculations done";
    }
    return 0;
}