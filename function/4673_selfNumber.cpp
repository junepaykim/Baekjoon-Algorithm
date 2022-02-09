#include<iostream>
#include <string>
using namespace std;


//Tomorrow...
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
    int temp = currentNum;
    if(answer[currentNum] == 0) {
        answer[dn] = 1;
        dn = makeDn(currentNum);
        checker(dn, answer);
    }
    cout << "current num is "<<currentNum << " dn is " << dn << "\n";    
}

int main() {
    int answer[10000] = {};
    int dn{0};
    string answerString {};
    for(int i=1; i<=10; i++) {
        checker(makeDn(i), answer);
        if(answer[i] == 0) {
            answerString += to_string(i) + "\n";
        }
    }
    for (int i=0; i<10; i++) {
        cout << "\ncurrent array is " << answer[i];
    }
    //cout << "answer is " << answerString << " ansArr is " << answer;
    return 0;
}