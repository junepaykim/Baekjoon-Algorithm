#include <iostream>
#include <string>

using namespace std;

//Easiest solution is just 
//1. searches index
//2. find biggest
//3. find is there any other biggest data in the array

//But I used this because it only searches one time through
//if it's not alphabet but big data such as user, other could cost a lot

int main() {
    string input{};
    cin >> input;

    int check[27] = {0};
    int maximumIndex{27}, nextMaxIndex{27};
    int tempIndex {};
    for(char ch : input) {
        tempIndex = ch;

        if(tempIndex < 91) {
            tempIndex -= 65;
        } else {
            tempIndex -= 97;
        }
        check[tempIndex] ++;

        if(check[maximumIndex] <= check[tempIndex]) {
            nextMaxIndex = maximumIndex;
            maximumIndex = tempIndex;
        }
    }

    if(check[nextMaxIndex] == check[maximumIndex] && maximumIndex != nextMaxIndex) {
        cout << "?";
    } else {
        cout << char(maximumIndex + 'A');
    }

    return 0;
}