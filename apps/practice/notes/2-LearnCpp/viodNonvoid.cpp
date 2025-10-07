// void showDouble(int);      // prints double of argument  
// int  getDouble(int);       // returns double of argument
#include <iostream>
void showDouble(int);
int getDouble(int);

int main(){
    showDouble(20);
    int a= getDouble(40);
    std::cout<<"Double of "<<a<<" is "<<a*2<<std::endl;
    return 0;
}

void showDouble(int a ){
    std::cout<<"Double of "<<a<<" is "<<a*2<<std::endl;
}

int getDouble(int a){
    return a*2;

}