#include<iostream>
#include<string>

using namespace std;

int main() {
    int numberOfQuestions{}, hit{0}, currentCount{0};

    cin >> numberOfQuestions;

    string currentOX;
    string answerWhole{};

    for(int i=0; i<numberOfQuestions; i++) {
        cin >> currentOX;

        for(int j=0; j<currentOX.length(); j++) {
            if(currentOX.at(j) == 'O') {
                hit++;
            } else {
                hit = 0;
            }
            currentCount += hit;
        }

        answerWhole = answerWhole + to_string(currentCount) + '\n';
        hit = 0;
        currentCount = 0;
    }

    answerWhole=answerWhole.substr(0, answerWhole.length()-1);
    cout << answerWhole;
    return 0;
}