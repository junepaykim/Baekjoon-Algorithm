#include<iostream>

using namespace std;
int main() {
    int temp{}, maxNum{0}, index{};

    for(int i=0; i<9; i++) {
        cin >> temp;
        if(maxNum < temp) {
            maxNum = temp;
            index = i+1;
        }
    }

    cout << maxNum << "\n" << index;
}