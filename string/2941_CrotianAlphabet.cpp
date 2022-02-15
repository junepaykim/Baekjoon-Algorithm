#include<iostream>
#include<string>

using namespace std;

int main() {
    string input{};
    cin >> input;

    int answer = input.length();
    char currentChar{};

    for(int i=0; i<input.length(); i++) {
        currentChar = input.at(i);
        if(i < input.length()-1) {
            switch(currentChar)
            {
                case 'c' :
                    if(input.at(i+1) == '=' || input.at(i+1) == '-') {
                        answer --;
                    }
                    break;
                case 'd' :
                    if(input.at(i+1) == '-') {
                        answer --;
                    } else if(input.at(i+1) == 'z' 
                        && i < input.length()-2 && input.at(i+2) == '=') {
                        answer --;
                    }
                    break;
                case 'l' :
                case 'n' :
                    if(input.at(i+1) == 'j') {
                        answer --;
                    }
                    break;
                case 's' :
                case 'z' :
                    if(input.at(i+1) == '=') {
                        answer --;
                    }
                    break;
                default :
                    break;
            }
        } else {
            break;
        }
    }
    cout << answer;
}