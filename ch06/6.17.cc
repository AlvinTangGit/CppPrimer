#include <string>
#include <iostream>

using std::string;
bool hasCapital(const string& s){
    for(auto i : s){
        if(i >= 'A' && i <= 'Z'){
            return true;
        }
    }
    
    return false;
}

void lowerCase(string& s){
    for(auto &i : s){
        if(i >= 'A' && i <= 'Z'){
            i += 'a' - 'A';
        }
    }
}

int main(){
    string s;
    std::cin >> s;
    std::cout << "s hasCapital: " << hasCapital(s) << std::endl;
    lowerCase(s);
    std::cout << "s lowerCase: " << s << std::endl;
    return 0;
}