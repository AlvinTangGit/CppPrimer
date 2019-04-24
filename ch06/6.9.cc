#include"Chapter6.h"

int main(){
    int ival;
    std::cout << "Input the number to factorial:" << std::endl;
    while(std::cin >> ival){
        char c;
        if(!std::cin || c == 'n'){
            break;
        }
        std::cout << "The factorial of " << ival << " is:" << fact(ival) << std::endl;
        std::cout << "Input the number for another calculate or n for exit:" << std::endl;
        
    }
    return 0;
}