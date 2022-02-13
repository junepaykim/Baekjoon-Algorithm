#include<iostream>
#include<string>
using namespace std;

int main() {
    string input{};
    string answer{};
    cin >> input;

    //initialize answer array
    int answerCheck[26];
    for(int i=0; i<26; i++) {
        answerCheck[i] = -1;
    }

    //check string
    //Big for loop for string and small one for that string to char

    //input.length to 0 because it could reudce one if state
    for(int i=input.length()-1; 0 <= i; i--) {
        answerCheck[input.at(i)-97] = i;
    }

    for (int i=0; i<26; i++) {
        answer += to_string(answerCheck[i]) + " ";
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    return 0;
}