#include <iostream>
#include <string>
using std::string;

int main(){
    string str1, str2;
    do{
        if(str1 != str2)
            std::cout << (str1.compare(str2) > 0 ? str2 : str1) + " is less than the other." << std::endl;
    }while(std::cin >> str1 >> str2);
    return 0;
}