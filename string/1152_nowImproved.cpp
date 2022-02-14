#include<string>
#include<iostream>

using namespace std;


//At first, I misread question that I have to compare all words each other
//But at glance, I realized that I just have to count ' '
int main() {
    string input;
    getline(cin, input);

    int answer{1};

    for(char ch : input) {
        if(ch != ' ') {
            continue;
        } else {
            answer ++;
        }
    }
    if(input.at(0) == ' ') {
        answer --;
    }
    if(input.at(input.length()-1) == ' ') {
        answer --;
    }
    cout << answer;

    return 0;
}