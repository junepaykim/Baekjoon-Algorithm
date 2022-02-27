#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {
    int M{}, N{};

    cin >> M >> N;

    char * check = new char[N+1];
    string answer{""};
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

    for(int i=M; i<=N; i++) {
        if(check[i] == 0) {
            answer += to_string(i)+"\n";
        }
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    delete[] check;
    return 0;
}