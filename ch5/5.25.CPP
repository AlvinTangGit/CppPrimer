#include <iostream>
#include<exception>

int main(){
    int ival1, ival2;
    while(std::cin >> ival1 >> ival2){
        try{
            if(ival2 == 0){
                throw std::runtime_error("Divided by zero.");
            }
            std::cout << ival1/ival2 << std::endl;
        }
        catch(...){
            std::cout << "Try Again? Enter y or n" << std::endl;
            char c;
            std::cin >> c;
            if(!std::cin || c == 'n'){
                break;
            }
        }
        
    }
    return 0;
}