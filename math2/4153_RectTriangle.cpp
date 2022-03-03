#include<iostream>
#include<string>

using namespace std;

int main() {
    int A{}, B{}, C{}, temp{};
    string currentAnswer{}, answer{};
    while(true) {
        cin >> A >> B >> C;
        if(A == 0) {
            break;
        }

        //Make C biggest Number
        if(A > B && A > C) {
            temp = A;
            A = C;
            C = temp;
        } else if(B > A && B > C) {
            temp = B;
            B = C;
            C = temp;
        }
        currentAnswer = (A*A + B*B == C*C) ? "right\n" : "wrong\n";
        answer += currentAnswer;
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    return 0;
}