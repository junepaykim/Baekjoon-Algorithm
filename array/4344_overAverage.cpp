#include<iostream>

using namespace std;

int main () {
    int caseNumber{}, studentNumber{};
    float scoreSum{0}, average{}, underAverageCount{};

    cin >> caseNumber;

    int studentArray[1000];
    float * answerArray = new float[caseNumber];

    for(int i=0; i<caseNumber; i++) {
        cin >> studentNumber;
        for (int j=0; j<studentNumber; j++) {
            cin >> studentArray[j];
            scoreSum += studentArray[j];
        }
        average = scoreSum / studentNumber;
        for (int j=0; j<studentNumber; j++) {
            if(average < studentArray[j]) {
                underAverageCount ++;
            }
        }
        answerArray[i] = underAverageCount / studentNumber * 100;
        underAverageCount = 0;
        scoreSum = 0;
    }

    //could improve last output phase but just skipped it.    
    cout.setf(ios::fixed);
    cout.precision(3);
    for (int i=0; i<caseNumber; i++) {
        cout << answerArray[i] << "%\n";
    }

    delete[] answerArray;
    return 0;
}