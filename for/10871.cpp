#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    int number, pivot, currentNumber;
    cin >> number >> pivot;
    string answer;
    for (int i=0; i<number; i++) {
        cin >> currentNumber;
        if(currentNumber < pivot) {
            answer += to_string(currentNumber) + " ";
        }
    }
    cout << answer;
    return 0;
}

