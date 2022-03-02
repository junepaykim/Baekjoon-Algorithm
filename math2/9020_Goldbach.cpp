#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {
    int N = 10000;

    char * check = new char[N];
    for(int i=0; i<N; i++) {
        check[i] = 0;
    }

    for (int i=2; i<=sqrt(N); i++) {
        if(check[i] != 0) {
            continue;
        }

        for(int j=2; i*j <N; j++) {
            check[i*j]++;
        }
    }
    check[1] = 1;
    //check 배열에 인덱스에 해당하는 값이 0이면 인덱스는 소수, 1이면 인덱스는 소수가 아님

    string answer{""};
    int numInput{}, currentInput{}, count{0}, num1{}, num2{};
    //numInput = 입력값의 갯수,
    //currentInput = 현재 처리해야하는 골드바흐 숫자(짝수)
    cin >> numInput;

    for(int i=0; i<numInput; i++) {
        cin >> currentInput;
        num1 = currentInput / 2;
        num2 = currentInput / 2;

        while(check[num1] != 0 || check[num2] != 0) {
            num1--;
            num2++;
        }
        answer += to_string(num1) + " " + to_string(num2) + "\n";
    }

    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    delete[] check;
    return 0;
}
//https://www.acmicpc.net/problem/9020
//Goldbach