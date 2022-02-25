#include<iostream>

using namespace std;

int main() {
    int M{}, N{};
    cin >> M >> N;

    int * check = new int[N+1];
    for(int i=0; i<N+1; i++) {
        check[i] = 0;
    }

    for(int i=2; i<= N/2; i++) {
        for(int j=2; i*j<=N; j++) {
            check[i*j] ++;
        }
    }

    int min{-1}, answer{0};
    check[1] = 1;

    for(int i=N; M<=i; i--) {
        if(check[i] == 0) {
            answer +=i;
            min = i;
        }
    }

    delete[] check;
    
    if(answer != 0) {
        cout << answer << "\n" << min;
    } else {
        cout << min;
    }
    
    return 0;
}