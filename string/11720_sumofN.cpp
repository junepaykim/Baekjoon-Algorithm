#include<iostream>
#include<string>

using namespace std;

int main() {
    int numbers{}, answer{0};
    cin >> numbers;
    string allNumber;
    cin >> allNumber;
    for(int i=0; i<numbers; i++) {
        answer += allNumber.at(i) - 48;
    }
    cout << answer;
    return 0;
}