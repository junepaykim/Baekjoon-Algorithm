#include<iostream>
#include<string>

using namespace std;

int main() {
    int input{}, currentN{2};

    cin >> input;

    string answer {""};

    while(input >= currentN) {
        if(input % currentN == 0) {
            input = input / currentN;
            answer += to_string(currentN) + "\n";
        } else {
            currentN ++;
        }
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    return 0;
}