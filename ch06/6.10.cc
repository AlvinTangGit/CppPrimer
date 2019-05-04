#include "Chapter6.h"

int main(){
    int ival1, ival2;
    cout << "Key in tow int value to swap:" << endl;
    while(cin >> ival1 >> ival2){
        char c;
        if(!std::cin || c == 'n'){
            break;
        }
        cout << "Your input: value1 = " << ival1 << " value2 = " << ival2 << endl;
        swapInt(&ival1, &ival2);
        cout << "After swap: value1 = " << ival1 << " value2 = " << ival2 << endl;
        std::cout << "Key in tow int value to swap: or n for exit:" << std::endl;
    }
    
    return 0;
}
int swapInt(int* pint1, int* pint2){
    int tmp = *pint1;
    *pint1 = *pint2;
    *pint2 = tmp;
    return 0;
}