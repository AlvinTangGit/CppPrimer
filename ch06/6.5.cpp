#include<iostream>

int abs(int num);

int main(){
    int ival;
    std::cout << "Input the number to get abs:" << std::endl;
    while(std::cin >> ival){
        char c;
        if(!std::cin || c == 'n'){
            break;
        }
        std::cout << "The abs of " << ival << " is:" << abs(ival) << std::endl;
        std::cout << "Input the number for another calculate or n for exit:" << std::endl;
        
    }
    return 0;
}

int abs(int num){
    if(num < 0){
        return -num;
    }
    else{
        return num;
    }
}