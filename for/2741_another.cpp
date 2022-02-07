#include <iostream>
#include <string>
using namespace std;

// 시간 4ms로 실행시간이 3분의 1로 줄어듬

int main(int argc, char* argv[]) {
    int count;
    cin >> count;
    string answer;
    
    for(int i=0; i<count; i++)
        answer += to_string(i+1) + "\n";
    
    cout << answer;
    return 0;
}

