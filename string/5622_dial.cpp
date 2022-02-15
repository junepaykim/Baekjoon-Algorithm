#include<iostream>
#include<string>

using namespace std;

int main() {
    string input{};
    int currentNumber{};
    cin >> input;
    for(char ch : input) {
        currentNumber = (ch - 'A');
    }
    return 0;
}