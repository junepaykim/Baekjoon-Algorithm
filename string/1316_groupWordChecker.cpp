#include<iostream>
#include<string>
#include<memory.h>

using namespace std;

int main() {
    int number{};
    cin >> number;
    char beforeChar{};

    string currentInput{};
    string nextString{};

    int answer = number;
    char checker[26] = {};

    /*
    number of inputs = N
    String Length = M
    total time complexity = N * M
    
    first for ch loop
        remove same char from original array

    second for ch loop
        loops through new string from first ch loop
        if it contains a letter more than twice, it's not group word

    */
    for (int i=0; i<number; i++) {
        cin >> currentInput;
        
        for(char ch : currentInput) {
            if(beforeChar != ch) {
                nextString += ch;
            }
            beforeChar = ch;
        }
        for(char ch : nextString) {
            checker[ch-'a']++;
            if(1 < checker[ch-'a']) {
                answer--;
                break;
            }
        }

        memset(checker, 0, sizeof(checker));
        nextString = "";
        beforeChar = 0;   
    }
    cout << answer;
    return 0;
}