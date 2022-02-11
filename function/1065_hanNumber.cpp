#include<iostream>
using namespace std;

void hanCheck(int currentNumber, int* count) {

    int differ = currentNumber /10 %10 - currentNumber % 10;

    do {
        currentNumber = currentNumber /10;
    } while (currentNumber /10 %10 - currentNumber %10 == differ);

    if(currentNumber < 10) {
        *count += 1;
    }
}

int main() {
    int maxNumber{};
    int count{0};

    cin >> maxNumber;

    for (int i=1; i<=maxNumber; i++) {
        hanCheck(i, &count);    
    }

    cout << count;
    return 0;
}