#include<iostream>
using namespace std;

void hanCheck(int currentNumber, int* count) {

    //Big number - small number
    //tomorrow!
    //maybe just same numbers are counted or even they are not counted
    int differ = currentNumber /10 %10 - currentNumber % 10;

    while (currentNumber /10 %10 - currentNumber %10 == differ) {
        currentNumber = currentNumber/10;
    }

    if(currentNumber == 0)
        *count += 1;
}

void isHan(int number) {
    int temp{0};
    hanCheck(number, &temp);
    if(temp) {
        cout << "true!";
    } else {
        cout << "false!";
    }
}

int main() {
    int maxNumber{};
    int count{0};

    cin >> maxNumber;

    for (int i=1; i<=maxNumber; i++) {
        hanCheck(i, &count);    
    }
    for (int i=100; i<=110; i++) {
        //isHan(i);
    }
    cout << count;
    return 0;
}