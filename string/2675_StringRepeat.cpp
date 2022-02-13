#include<iostream>
#include<string>

using namespace std;

int main() {
    int allInput{};
    int repeat{};

    cin >> allInput;

    string currentInput {};
    string answer {};

    //I don't know which would be fast : string += repeatWorld
    // vs string = (charArray[i] = appropriate worl)
    for (int i=0; i<allInput; i++) {
        cin >> repeat >> currentInput;
        
        for(int j=0; j<currentInput.length(); j++) {
            for (int k=0; k<repeat; k++) {
                answer += currentInput.at(j);
            }
        }
        answer += "\n";
    }
    answer = answer.substr(0, answer.length()-1);
    cout << answer;
    return 0;
}