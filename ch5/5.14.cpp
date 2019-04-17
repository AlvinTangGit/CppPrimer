#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin;
using std::end;
int main(){
    string inStr, preStr;
	int cnt = 0, cntMax = 0;
	string maxStr;
	while(cin >> inStr){
		if(inStr != preStr){
			if(cnt > cntMax){
				cntMax = cnt + 1;
				maxStr = preStr;
			}
			preStr = inStr;
			cnt = 0;
		}
		else{
			++cnt;
		}
	}
	
	if(cntMax > 0){
		cout << maxStr + " Occors " << cntMax << " times" << endl;
	}
    return 0;
}