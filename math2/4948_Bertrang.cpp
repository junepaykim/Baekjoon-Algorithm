#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {
    int N = 123456 * 2;

    char * check = new char[N+1];
    for(int i=0; i<N; i++) {
        check[i] = 0;
    }

    for (int i=2; i<=sqrt(N); i++) {
        if(check[i] != 0) {
            continue;
        }

        for(int j=2; i*j <=N; j++) {
            check[i*j]++;
        }
    }
    check[1] = 1;

    string answer{""};
    int currentInput{}, count{0};

    cin >> currentInput;
    while(currentInput != 0) {
        for(int i=currentInput+1; i<=2*currentInput; i++) {
            if(check[i] == 0) {
                count++;
            }
        }
        answer += to_string(count)+"\n";
        count = 0;
        cin >> currentInput;
    }

    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    delete[] check;
    return 0;
}
//https://www.acmicpc.net/source/39726094
//#Bertrang