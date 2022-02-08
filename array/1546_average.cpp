#include <iostream>

using namespace std;

int main() {
    int subjectNumbers{};
    float answer{0}, maxNum{0};

    cin >> subjectNumbers;

    int *subjectScore = new int[subjectNumbers];

    //first array to get input and check max Num
    for(int i=0; i<subjectNumbers; i++) {
        cin >> subjectScore[i];
        if(maxNum < subjectScore[i]) {
            maxNum = subjectScore[i];
        }
    }

    //second array to calculate
    for (int i=0; i<subjectNumbers; i++) {
        answer += subjectScore[i] / maxNum * 100 / subjectNumbers;;
    }

    delete[] subjectScore;
    cout << answer;
    return 0;
}