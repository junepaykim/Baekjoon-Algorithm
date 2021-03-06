#include <iostream>
#include <string>

using namespace std;


//Original contains test code too
int main() {
    string input{};
    cin >> input;

    int check[27] = {0};
    int maximumIndex{27}, nextMaxIndex{27};
    int tempIndex {};

    for(int i=0; i<input.length(); i++) {
        //Upper alphabet
        if(input.at(i) < '^') {
            tempIndex = input.at(i) - 65;
        } else {
            tempIndex = input.at(i) - 97;
        }
        check[tempIndex] ++;

        if(check[maximumIndex] <= check[tempIndex]) {
            nextMaxIndex = maximumIndex;
            maximumIndex = tempIndex;
        }
    }
    for(int i=0; i<26; i++) {
        //cout << check[i] << " ";
    }
    //cout << "\n" << char('A' + maximumIndex) << " " << char('A' + nextMaxIndex) << "\n";
    if(check[nextMaxIndex] == check[maximumIndex] && maximumIndex != nextMaxIndex) {
        cout << "?";
    } else {
        cout << char(maximumIndex + 'A');
    }

    return 0;
}