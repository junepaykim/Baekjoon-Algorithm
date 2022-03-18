#include<iostream>

using namespace std;

int fibonacci(int n, int * countZero, int * countOne);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int countZero{}, countOne{}, inputN{}, temp{};

    cin >> inputN;

    for(int i=0; i<inputN; i++)
    {
        countZero = 0;
        countOne = 0;
        cin >> temp;
        fibonacci(temp, &countZero, &countOne);
        cout << countZero << " " << countOne << "\n";
    }

    return 0;
}

int fibonacci(int n, int * countZero, int * countOne) {
    if (n == 0) {
        *countZero = *countZero + 1;
        return 0;
    } else if (n == 1) {
        *countOne = *countOne + 1;
        return 1;
    } else {
        return fibonacci(n-1, countZero, countOne) + fibonacci(n-2, countZero, countOne);
    }
}