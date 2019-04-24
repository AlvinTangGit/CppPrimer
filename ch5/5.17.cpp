#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

bool headof(vector<int> v1, vector<int> v2);

int main(){
    vector<int> v1 = {0,1,1,2};
    vector<int> v2 = {0,1,1,2,3,4,5};
    bool result = headof(v1, v2);
    return 0;
}


bool headof(vector<int> v1, vector<int> v2){

    if(v1.size() > v2.size()){
        return false;
    }

    for(decltype(v1.size()) i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]){
            return false;
        }
    }

    return true;
}




