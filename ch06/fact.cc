#include "Chapter6.h"

double fact(int num){
    double result = 1.0;
    while(num > 0){
        result *= num--;
    }
    return result;
}