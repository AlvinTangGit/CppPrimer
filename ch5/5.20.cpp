#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main(){
    string str;
    bool _repeat = false;
    vector<string> restore;
    while(std::cin >> str){
        if(!str.empty()){
            for(string i : restore){
                if(i == str){
                    _repeat = true;
                    break;
                }
            }
            if(_repeat){
                break;
            }
            restore.push_back(str);
        }
    }
    if(_repeat){
        std::cout << str + " occurs twice." << std::endl;
    }
    else{
        std::cout << "No word was repeated." << std::endl;
    }
    return 0;
}