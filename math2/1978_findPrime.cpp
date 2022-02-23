#include<iostream>

using namespace std;

int main() {
    int check[1001] = {};

    //i = current number
    //j = 곱하기. 배수 판별
    for(int i=2; i<1000; i++) {
        for(int j=2; i*j<=1000; j++) {
            check[i*j] ++;
        }
    }

    int input{}, answer{0}, temp{};
    check[1] = 1;
    cin >> input;

    for(int i=0; i<input; i++) {
        cin >> temp;

        if(check[temp] == 0) {
            answer++;
        }
    }
    
    cout << answer;
    return 0;
}