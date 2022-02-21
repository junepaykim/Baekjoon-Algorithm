#include<iostream>
#include<string>
using namespace std;

int main() {
    string A{""}, B{""};
    cin >> A >> B;

    int newLength = ((A.length() > B.length()) ? A.length() : B.length()) + 1;

    string answer{};

    int currentA{}, currentB{}, over{0}, currentN{0};

    for(int i=0; i<newLength; i++) {
        currentA = int(A.at(i));
        currentB = int(B.at(i));

        over = (currentA + currentB + over) / 10;
        currentN = (currentA + currentB + over) % 10;

        answer = to_string(currentN) + answer;
    }
    cout << answer;
    return 0;
}

// 대충 스트링 길이 짧은쪽까지만 계산하도록 셋팅해주면 된다.
