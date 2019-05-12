#include "Chapter6.h"
#include<vector>
using std::initializer_list;
int sumInitList(initializer_list<int> paras){
    int sum = 0;
    for(auto &i : paras){
        sum += i;
    }
    cout << "The sum is : " << sum << endl;
}

int main(){
    initializer_list<int> paras{0, 1,2,3,4,5};
    sumInitList(paras);
    return 0;
}