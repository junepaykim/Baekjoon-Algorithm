#include<iostream>

using namespace std;

int main() {
    int inputArray[6], answerX{}, answerY{};
    for(int i=0; i<6; i++) {
        cin >> inputArray[i];
    }

    if(inputArray[0] == inputArray[2]) {
        answerX = inputArray[4];
    } else if(inputArray[2] == inputArray[4]) {
        answerX = inputArray[0];
    } else {
        //inputArray[0] == inputArray[4]
        answerX = inputArray[2];
    }

    if(inputArray[1] == inputArray[3]) {
        answerY = inputArray[5];
    } else if(inputArray[3] == inputArray[5]) {
        answerY = inputArray[1];
    } else {
        //inputArray[1] == inputArray[5]
        answerY = inputArray[3];
    }

    cout << answerX << " " << answerY;
    return 0;
}