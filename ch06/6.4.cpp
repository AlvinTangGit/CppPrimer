#include<iostream>

double fact(int num);

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

double fact(int num){
    double result = 1.0;
    while(num > 0){
        result *= num--;
    }
    return result;
}