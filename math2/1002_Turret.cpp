#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    int inputNumber {};
    cin >> inputNumber;

    int x1{}, y1{}, r1{}, x2{}, y2{}, r2{}, temp{}, distance{};

    string answer{""};

    for(int i=0; i<inputNumber; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(r1 > r2) {
            temp = r1;
            r1 = r2;
            r2 = temp;
        }
        distance = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        if((r1 + r2) * (r1 + r2) < distance) {
            answer += "0\n";
        } else if((r1 + r2) * (r1 + r2) == distance) {
            answer += "1\n";
        } else if(x1 == x2 && y1 == y2 && r1 == r2) {
            answer += "-1\n";
        } else if(distance < (r2-r1) * (r2-r1)) {
            answer += "0\n";
        } else if(distance == (r2-r1) * (r2-r1)) {
            answer += "1\n";
        } else {
            answer += "2\n";
        }
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    return 0;
}

//https://www.acmicpc.net/problem/1002