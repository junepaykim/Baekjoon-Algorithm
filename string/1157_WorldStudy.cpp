#include <iostream>
#include <string>

using namespace std;

int main() {
    string input{};
    cin >> input;

    int check[27] = {0};
    int maximumIndex{27}, nextMaxIndex{27};

    for(int i=0; i<input.length(); i++) {
        //Upper alphabet
        if(input.at(i) < '^') {
            check[input.at(i) - 65] ++;
        } else {
            check[input.at(i) - 97] ++;
        }

        if(check[maximumIndex] < check[i]) {
            nextMaxIndex = maximumIndex;
            maximumIndex = i;
        }
    }
    for(int i=0; i<26; i++) {
        cout << check[i] << " ";
    }
    cout << "\n" << maximumIndex << " " << nextMaxIndex << "\n";
    if(check[nextMaxIndex] != check[maximumIndex]) {
        cout << char(maximumIndex + 'A');
    } else {
        cout << "?";
    }

    return 0;
}

//todo list
//second maximum is not updated well so fix it to work properly