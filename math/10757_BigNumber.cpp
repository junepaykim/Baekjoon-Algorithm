#include<iostream>
#include<string>
using namespace std;

int main() {
    string A{""}, B{""};
    cin >> A >> B;

    string temp{};
    if(A.length() < B.length()) {
        temp = A;
        A = B;
        B = temp;
    }

    string answer{};

    int currentA{0}, currentB{0}, over{0}, currentN{0};

    for(int i=B.length()-1; 0 <= i; i--) {
        currentA = A.at(A.length() - B.length() + i)-48;
        currentB = B.at(i)-48;
        currentN = (currentA + currentB + over) % 10;
        over = (currentA + currentB + over) / 10;
        answer = to_string(currentN) + answer;
    }
    if(B.length() == A.length()) {
        if(over == 1) {
            answer = "1" + answer;
        }
    } else {
        for(int i=A.length() - B.length()-1; 0 <= i; i--) {
            currentA = A.at(i)-48;
            currentN = (currentA + over) % 10;
            over = (currentA + over) / 10;
            answer = to_string(currentN) + answer;
        }
        if(over == 1) {
            answer = "1" + answer;
        }
    }
    cout << answer;
    return 0;
}
