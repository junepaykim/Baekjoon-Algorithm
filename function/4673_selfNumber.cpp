#include<iostream>
#include <string>
using namespace std;

#define testNum 10000

// 1 = not a self number
// 0 = self number
int makeDn(int input) {
    int answer{input}, temp{input};
    while(temp != 0) { 
        answer += temp % 10;
        temp /= 10;
    }
    return answer;
}

void checker(int currentNum, int *answer) {
    int dn{0};
    if(currentNum > testNum) return;
    if(answer[currentNum] == 0) {
        answer[currentNum] = 1;
        dn = makeDn(currentNum);
        checker(dn, answer);
    }
    //cout << "current num is "<<currentNum << " dn is " << dn << "\n";    
}

int main() {
    int answer[10001] = {};
    string answerString {};
    for(int i=1; i<=testNum; i++) {
        checker(makeDn(i), answer);
        if(answer[i] == 0) {
            answerString += to_string(i) + "\n";
        }
    }
    cout << answerString;
    return 0;
}