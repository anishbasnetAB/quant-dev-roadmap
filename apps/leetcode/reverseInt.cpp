// reverse the Int without converting in to the string.
#include <iostream>
int main (){
    int reverseThis{54321};
    int reversed{0};
    while(reverseThis != 0){
        int digit = reverseThis%10;
        reversed = reversed*10 + digit;
        reverseThis /=10;
    }
    std::cout<<reversed;
    return 0;
}