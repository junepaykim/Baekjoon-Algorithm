#include <iostream>

using namespace std;

int main() {
    int myArray[42] = {};
    int temp{};
    for(int i=0; i<10; i++) {
        cin >> temp;
        myArray[temp%42]++;
    }
    temp = 0;
    for(int i=0; i<42; i++) {
        if(myArray[i] != 0) {
            temp++;
        }
    }
    cout << temp;
    return 0;
}